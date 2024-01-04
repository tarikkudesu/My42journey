/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheap_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:56:27 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 16:56:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

unsigned int	cost_to_top(t_list **stack, t_list **cur)
{
	unsigned int	size;

	size = ft_lstsize(*stack);
	if ((*cur)->position <= size / 2)
		return ((*cur)->position);
	else
		return (size - (*cur)->position);
}

t_list	*find_target(unsigned int index, t_list **stack)
{
	t_list	*tmp;
	t_list	*target;

	tmp = *stack;
	target = tmp;
	while (tmp)
	{
		if (tmp->index < index)
		{
			target = tmp;
			break ;
		}
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index < index && tmp->index > target->index)
			target = tmp;
		tmp = tmp->next;
	}
	return (target);
}

unsigned int	steps_needed(t_list **a, t_list **b, t_list **cur)
{
	t_list	*target;

	target = find_target((*cur)->index, b);
	return (cost_to_top(a, cur) + cost_to_top(b, &target) + 1);
}

void	cheap_set(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		tmp->cheap = steps_needed(a, b, &tmp);
		tmp = tmp->next;
	}
}