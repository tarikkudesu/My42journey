/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:25:45 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 19:25:09 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_list **stack_a)
{
	unsigned int	i;
	t_list			*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (i != tmp->index)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (1);
}

void	sort(t_list **a, t_list **b)
{
	int		i;

	pb(a, b);
	pb(a, b);
	if ((*b)->index < (*b)->next->index)
		rb(b);
	i = ft_lstsize(*a);
	while (i--)
	{
		ft_set_positions(a);
		ft_set_positions(b);
		cheap_set(a, b);
		move_cheapest(a, b);
	}
	while ((*b)->index != 0)
		rb(b);
	rb(b);
	while ((*b))
		pa(a, b);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (is_sorted(stack_a))
	{
		free_stacks(stack_a, stack_b);
		exit(1);
	}
	if (size <= 5)
		simple_sort(stack_a, stack_b, size);
	else
		sort(stack_a, stack_b);
	return ;
}
