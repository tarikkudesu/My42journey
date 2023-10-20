/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_lstnew.c                            ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_header.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*list = NULL;
	list = (t_list *)malloc(sizeof(t_list));
	if (!list) {return (NULL);}
	list->content = content;
	list->next = NULL;
	return (list);
}
