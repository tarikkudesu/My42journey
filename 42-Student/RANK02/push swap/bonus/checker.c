/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:00:13 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/06 11:53:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
			if (!ft_isnumber(*(args + j)))
				ft_exit(stack_a, NULL, args);
			if (nb > INT_MAX || nb < INT_MIN)
				ft_exit(stack_a, NULL, args);
			new = ft_lstnew(nb);
			ft_lstadd_back(stack_a, new);
		}
		ft_free_arr(args);
	}
}

int	ft_doubles(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*stack;

	stack = *stack_a;
	while (stack->next)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->data == tmp->data)
				return (0);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (1 == argc || (2 == argc && !**(argv + 1)))
		return (1);
	stack_b = NULL;
	stack_a = NULL;
	ft_init_stack(&stack_a, argv + 1);
	if (!ft_doubles(&stack_a))
		ft_exit(&stack_a, NULL, NULL);
	checker(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
}
