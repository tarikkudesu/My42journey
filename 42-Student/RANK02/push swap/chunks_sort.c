/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:29:19 by ael-khni          #+#    #+#             */
/*   Updated: 2023/12/25 19:59:10 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	get_elem_index(t_stack a, int elem)
{
	int	index;

	index = 0;
	if (!a.top)
		return (-1);
	while (a.top && a.top->data != elem)
	{
		a.top = a.top->bellow;
		index++;
	}
	return (index);
}
void	push_to_stack_a(t_stack *a, t_stack *b)
{
	int	i;
	int	index;

	while (!is_empty(b))
	{
		i = 0;
		index = get_elem_index(*b, get_max(b));
		if (index == -1)
			return ;
		if (index <= b->size / 2)
			while (i++ < index)
				rb_rotate_b(b, false);
		else
			while (i++ < b->size - index)
				rrb_reverse_rotate_b(b, false);
		pa_push_a(a, b);
	}
}
int	*get_chunk_elem(t_stack *a, int subdiv)
{
	t_node	*top;
	t_node	*bottom;
	int		i;
	int		j;

	top = a->top;
	bottom = a->bottom;
	i = 0;
	j = a->size - 1;
	while (i++ <= j--)
	{
		if (top->data <= subdiv)
			return (&top->data);
		else if (bottom->data <= subdiv)
			return (&bottom->data);
		top = top->bellow;
		bottom = bottom->above;
	}
	return (NULL);
}
int	get_max(t_stack *stack)
{
	t_node	*tmp;
	int		max;

	tmp = stack->top;
	max = tmp->data;
	while (tmp->bellow)
	{
		tmp = tmp->bellow;
		if (max < tmp->data)
			max = tmp->data;
	}
	return (max);
}
int	get_min(t_stack *stack)
{
	t_node	*tmp;
	int		min;

	tmp = stack->top;
	min = tmp->data;
	while (tmp->bellow)
	{
		tmp = tmp->bellow;
		if (min > tmp->data)
			min = tmp->data;
	}
	return (min);
}
void	push_chunk_elems(t_stack *a, t_stack *b, int subdiv)
{
	int	*elem;
	int	index;
	int	i;

	elem = get_chunk_elem(a, subdiv);
	while (elem)
	{
		i = 0;
		index = get_elem_index(*a, *elem);
		if (index == -1)
			return ;
		if (index <= a->size / 2)
			while (i++ < index)
				ra_rotate_a(a, false);
		else
			while (i++ < a->size - index)
				rra_reverse_rotate_a(a, false);
		pb_push_b(a, b);
		elem = get_chunk_elem(a, subdiv);
	}
}
void	chunks_sort(t_stack *a, t_stack *b)
{
	int	subdiv;
	int	div;
	int	min;
	int	max;
	int	i;

	i = 1;
	if (a->size >= 100 && a->size < 500)
		div = 6;
	else
		div = 12;
	min = get_min(a);
	max = get_max(a);
	subdiv = (min + max) / div;
	while (!is_empty(a))
		push_chunk_elems(a, b, subdiv * i++);
	push_to_stack_a(a, b);
}
