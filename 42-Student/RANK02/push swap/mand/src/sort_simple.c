/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:12:31 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/05 11:03:59 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_min(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	if (!tmp)
		return (-1);
	while (0 != tmp->index && tmp)
		tmp = tmp->next;
	return (tmp->position);
}

void	ft_sort3(t_list **a)
{
	ft_set_positions(a);
	ft_index(a);
	if (0 == (*a)->index && 1 != (*a)->next->index)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if (1 == (*a)->index)
	{
		if ((*a)->next->index == 0)
			sa(a);
		else
			rra(a);
	}
	else
	{
		if (0 == (*a)->next->index)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	ft_sort4(t_list **stack_a, t_list **stack_b)
{
	int	min;

	ft_set_positions(stack_a);
	ft_index(stack_a);
	min = ft_min(stack_a);
	if (3 == min)
		rra(stack_a);
	else
		while (min--)
			ra(stack_a);
	pb(stack_a, stack_b);
	ft_sort3(stack_a);
	pa(stack_a, stack_b);
	ft_index(stack_a);
}

void	ft_sort5(t_list **stack_a, t_list **stack_b)
{
	int	min;

	ft_set_positions(stack_a);
	min = ft_min(stack_a);
	if (4 == min)
		rra(stack_a);
	else
		while (min--)
			ra(stack_a);
	pb(stack_a, stack_b);
	ft_sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
	ft_index(stack_a);
}

void	simple_sort(t_list **stack_a, t_list **stack_b, int size)
{
	if (1 >= size)
		return ;
	else if (2 == size)
		sa(stack_a);
	else if (3 == size)
		ft_sort3(stack_a);
	else if (4 == size)
		ft_sort4(stack_a, stack_b);
	else if (5 == size)
		ft_sort5(stack_a, stack_b);
}
