/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:47:43 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 19:16:19 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

// Remember to remove this
# include <stdio.h>

typedef struct s_list
{
	int				data;
	unsigned int	index;
	unsigned int	cheap;
	unsigned int	position;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

t_list	*ft_lstnew(int data);
void	ft_lstadd_front(t_list **lst, t_list *new);
unsigned int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list **lst);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_exit(t_list **a, t_list **b, char **args);
void	ft_free_arr(char **tab);
void	free_stacks(t_list **a, t_list **b);
int		ft_isnumber(char *str);
int		ft_doubles(t_list **stack_a);
int		is_sorted(t_list **stack_a);
void	ft_sort3(t_list **a);
void	simple_sort(t_list **stack_a, t_list **stack_b, int size);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	ft_init_stack(t_list **stack_a, char **argv);
void	ft_set_positions(t_list **a);
void	ft_index(t_list **stack_a);
int		sa(t_list **a);
int		sb(t_list **b);
int		ss(t_list **a, t_list **b);
int		ft_swap(t_list **a);
int		pa(t_list **a, t_list **b);
int		pb(t_list **a, t_list **b);
int		push(t_list **stack_to, t_list **stack_from);
int		ra(t_list **a);
int		rb(t_list **b);
int		rr(t_list **a, t_list **b);
int		rotate(t_list **stack);
int		rra(t_list **a);
int		rrb(t_list **b);
int		rrr(t_list **a, t_list **b);
int		reverse_rotate(t_list **stack);

/* DELETE FUNCTIONS */
void	ft_print(t_list *lst);


/* FUNCTIONS */
void	bring_to_top(t_list **a, t_list **b, t_list *cur, t_list *target);
t_list	*find_cheapest(t_list **a);
void	move_cheapest(t_list **a, t_list **b);
void	sort(t_list **a, t_list **b);
int	is_sorted(t_list **stack_a);
void	cheap_set(t_list **a, t_list **b);
unsigned int	steps_needed(t_list **a, t_list **b, t_list **cur);
t_list	*find_target(unsigned int index, t_list **stack);
unsigned int	cost_to_top(t_list **stack, t_list **cur);

#endif
