/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:42:31 by tamehri           #+#    #+#             */
/*   Updated: 2024/01/04 18:51:06 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print(t_list *lst)
{
	if (!lst)
		return ;
	printf("\t[ %u ]\t%u\t\t%u\t%u\n", lst->index, lst->position, lst->data, lst->cheap);
	if (lst->next)
		ft_print(lst->next);
}
// int main()
// {
// 	t_list n1, n2, n3, n4;
// 	n1.data = 64;
// 	n1.index = 1;
// 	n2.data = 6434;
// 	n2.index = 2;
// 	n3.data = 6344;
// 	n3.index = 3;
// 	n4.data = 34964;
// 	n4.index = 4;
// 	n1.next = &n2;
// 	n2.next = &n3;
// 	n3.next = &n4;
// 	n4.next = NULL;
// 	ft_print(&n1);
// 	ft_print(&n2);
// }
