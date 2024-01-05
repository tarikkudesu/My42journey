/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:57:13 by tamehri           #+#    #+#             */
/*   Updated: 2023/12/20 11:3 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	ft_putstr_fd("Error\n", 1);
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

void	ft_init_stack(t_list **stack_a, char **argv)
{
	int		i;
	int		j;
	long	nb;
	char	**args;
	t_list	*new;

	i = -1;
	while (*(argv + ++i))
	{
		j = -1;
		args = ft_split(*(argv + i), ' ');
		if (!args)
			ft_exit(NULL, NULL, args);
		while (*(args + ++j))
		{
			nb = ft_atoi(*(args + j));
			if (!ft_isnumber(*(args + j)) || nb > INT_MAX || nb < INT_MIN)
				ft_exit(stack_a, NULL, args);
			new = ft_lstnew(nb);
			ft_lstadd_back(stack_a, new);
		}
		ft_free_arr(args);
	}
	ft_index(stack_a);
}
