/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:46:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 19:28:59 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_doubles(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*stack;
	int		i;

	stack = *stack_a;
	while (stack->next)
	{
		i = 0;
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

void	ft_set_positions(t_list **a)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_index(t_list **stack_a)
{
	t_list	*stack;
	t_list	*tmp;
	int		index;

	stack = *stack_a;
	while (stack)
	{
		index = 0;
		tmp = *stack_a;
		while (tmp)
		{
			if (stack->data > tmp->data)
				index++;
			tmp = tmp->next;
		}
		stack->index = index;
		stack = stack->next;
	}
}

void	fi(void)
{
	system("leaks push_swap");
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
	printf("\033[1;32mInitial stat :\n");
	// ft_print(stack_a);
	// printf("\033[0m\n");
	sort_stack(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
}
