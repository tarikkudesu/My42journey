/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:14:23 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/06 11:56:24 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_sorted(t_list **stack_a)
{
	t_list			*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->next && tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	checker_next(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "ra\n"))
		ra(a);
	else if (!ft_strcmp(line, "rb\n"))
		rb(b);
	else if (!ft_strcmp(line, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(line, "rra\n"))
		rra(a);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(a, b);
	else if (!ft_strcmp(line, "pb\n"))
		pb(a, b);
	else
		ft_exit(a, b, NULL);
}

void	checker(t_list **a, t_list **b)
{
	char	*line;

	line = NULL;
	while (1)
	{
		line = get_next_line(0);
		if (!ft_strcmp(line, "sa\n"))
			sa(a);
		else if (!ft_strcmp(line, "sb\n"))
			sb(b);
		else if (!ft_strcmp(line, "ss\n"))
			ss(a, b);
		else if (!ft_strcmp(line, "pa\n"))
			pa(a, b);
		else if (!ft_strcmp(line, ""))
			break ;
		else
			checker_next(a, b, line);
		free(line);
		line = NULL;
	}
	if (is_sorted(a) && !(*b))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}
