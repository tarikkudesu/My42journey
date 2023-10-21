/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_lstadd_front.c                      ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_header.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !*lst)
		return ;
	new->next = *lst;
	*lst = new;
}