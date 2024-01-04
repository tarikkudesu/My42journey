/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:36:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/02 14:50:12 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_swap(t_list **a)
{
	int	d;
	int	i;

	if (ft_lstsize(*a) <= 1)
		return (0);
	d = (*a)->data;
	i = (*a)->index;
	(*a)->data = (*a)->next->data;
	(*a)->index = (*a)->next->index;
	(*a)->next->data = d;
	(*a)->next->index = i;
	return (1);
}

int	sa(t_list **a)
{
	if (!ft_swap(a))
		return (0);
	ft_putstr_fd("sa\n", 1);
	return (0);
}

int	sb(t_list **b)
{
	if (!ft_swap(b))
		return (0);
	ft_putstr_fd("sb\n", 1);
	return (0);
}

int	ss(t_list **a, t_list **b)
{
	if (!ft_swap(a))
		return (0);
	if (!ft_swap(b))
		return (0);
	ft_putstr_fd("ss\n", 1);
	return (1);
}
