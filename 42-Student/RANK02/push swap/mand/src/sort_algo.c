/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:56:40 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/05 16:26:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	loop_rrr(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	while (cur->data != (*a)->data
		&& target->data != (*b)->data)
		if (!rrr(a, b))
			return (0);
	while (cur->data != (*a)->data)
		if (!rra(a))
			return (0);
	while (target->data != (*b)->data)
		if (!rrb(b))
			return (0);
	return (1);
}

int	loop_rr(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	while (cur->data != (*a)->data
		&& target->data != (*b)->data)
		if (!rr(a, b))
			return (0);
	while (cur->data != (*a)->data)
		if (!ra(a))
			return (0);
	while (target->data != (*b)->data)
		if (!rb(b))
			return (0);
	return (1);
}

int	loopsingle(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	if (cur->position <= ft_lstsize(*a) / 2)
	{
		while (cur->data != (*a)->data)
			if (!ra(a))
				return (0);
	}
	else
	{
		while (cur->data != (*a)->data)
			if (!rra(a))
				return (0);
	}
	if (target->position <= ft_lstsize(*b) / 2)
	{
		while (target->data != (*b)->data)
			if (!rb(b))
				return (0);
	}
	else
	{
		while (target->data != (*b)->data)
			if (!rrb(b))
				return (0);
	}
	return (1);
}

int	bring_top(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	if (cur->position > ft_lstsize(*a) / 2
		&& target->position > ft_lstsize(*b) / 2)
	{
		if (!loop_rrr(a, b, cur, target))
			return (0);
	}
	else if (cur->position <= ft_lstsize(*a) / 2
		&& target->position <= ft_lstsize(*b) / 2)
	{
		if (!loop_rr(a, b, cur, target))
			return (0);
	}
	else
	{
		if (!loopsingle(a, b, cur, target))
			return (0);
	}
	return (1);
}

int	move_cheapest(t_list **a, t_list **b)
{
	t_list	*target;
	t_list	*curr;

	curr = find_cheapest(a);
	if (is_min(b, curr->index))
		target = find_target((find_max(b) + 1), b);
	else
		target = find_target(curr->index, b);
	ft_set_positions(a);
	ft_set_positions(b);
	if (!bring_top(a, b, curr, target))
		return (0);
	pb(a, b);
	return (1);
}
