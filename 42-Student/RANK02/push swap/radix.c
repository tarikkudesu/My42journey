/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:56:25 by tamehri           #+#    #+#             */
/*   Updated: 2023/12/27 10:56:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_max_bits(long size)
{
	if (size < 10)
		return (1);
	return (1 + ft_max_bits(size / 10));
}

void	radix_2(t_list **a, t_list **b, int p)
{
	int		i;
	int		j;
	int		size;
	t_list	*tmp;

	i = 10;
	while (--i >= 0)
	{
		j = -1;
		size = ft_lstsize(*a);
		while (++j < size)
		{
			tmp = *a;
			if (i == (tmp->index / p) % 10)
				pb(a, b);
			else
				ra(a);
		}
	}
}

void	radix(t_list **a, t_list **b, int p)
{
	int		i;
	int		j;
	int		size;
	t_list	*tmp;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		size = ft_lstsize(*a);
		while (++j < size)
		{
			tmp = *a;
			if (i == (tmp->index / p) % 10)
				pb(a, b);
			else
				ra(a);
		}
	}
	i = -1;
	j = ft_lstsize(*b);
	while (++i < j)
		pa(a, b);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int size)
{
	int		max_bits;
	int		i;
	int		j;

	max_bits = ft_max_bits(size - 1);
	i = 0;
	j = 1;
	while (++i < max_bits + 1)
	{
		radix(stack_a, stack_b, j);
		j *= 10;
	}
}
