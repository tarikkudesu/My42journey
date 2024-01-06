/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:13:01 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/06 11:09:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_stacks(t_list **a, t_list **b)
{
	if (a)
	{
		ft_lstclear(a);
		*a = NULL;
	}
	if (b)
	{
		ft_lstclear(b);
		*b = NULL;
	}
}

void	ft_free_arr(char **tab)
{
	int	i;

	i = 0;
	while (*(tab + i))
		free(*(tab + i++));
	free(tab);
}

void	ft_exit(t_list **a, t_list **b, char **args)
{
	if (args)
		ft_free_arr(args);
	free_stacks(a, b);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	ft_isnumber(char *str)
{
	if (!str)
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
		if (!ft_isdigit(*str++))
			return (0);
	return (1);
}
