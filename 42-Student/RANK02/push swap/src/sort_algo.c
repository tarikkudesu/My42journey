/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:56:40 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 19:18:40 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	loop_rrr(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	while (cur->data != (*a)->data
			&& target->data != (*b)->data)
		rrr(a, b);
	while (cur->data != (*a)->data)
		rra(a);
	while (target->data != (*b)->data)
		rrb(b);
}

void	loop_rr(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	while (cur->data != (*a)->data
			&& target->data != (*b)->data)
		rr(a, b);
	while (cur->data != (*a)->data)
		ra(a);
	while (target->data != (*b)->data)
		rb(b);
}

void	loop_single(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	if (cur->position <= ft_lstsize(*a) / 2)
		while (cur->data != (*a)->data)
			ra(a);
	else
		while (cur->data != (*a)->data)
			rra(a);
	if (target->position <= ft_lstsize(*b) / 2)
		while (target->data != (*b)->data)
			rb(b);
	else
		while (target->data != (*b)->data)
			rrb(b);
}

void	bring_to_top(t_list **a, t_list **b, t_list *cur, t_list *target)
{
	if (cur->position > ft_lstsize(*a) / 2
			&& target->position > ft_lstsize(*b) / 2)
		loop_rrr(a, b, cur, target);
	else if (cur->position <= ft_lstsize(*a) / 2
			&& target->position <= ft_lstsize(*b) / 2)
		loop_rr(a, b, cur, target);
	else
		loop_single(a, b, cur, target);	
}

t_list	*find_cheapest(t_list **a)
{
	t_list	*tmp;
	t_list	*cur;

	tmp = *a;
	cur = tmp;
	while (tmp)
	{
		if (tmp->cheap < cur->cheap)
			cur = tmp;
		tmp = tmp->next;
	}
	return (cur);
}

void	move_cheapest(t_list **a, t_list **b)
{
	t_list	*target;
	t_list	*curr;

	curr = find_cheapest(a);
	target = find_target(curr->index, b);
	ft_set_positions(a);
	ft_set_positions(b);
	bring_to_top(a, b, curr, target);
	pb(a, b);
}

