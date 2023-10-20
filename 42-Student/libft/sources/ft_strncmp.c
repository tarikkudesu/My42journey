/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_strncmp.c                           ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) && *(s2 + i) &&*(s1 + i) == *(s2 + i) && i < n - 1)
		i++;
	if (*(s1 + i) == *(s2 + i))
		return (0);
	return (*(s1 + i) - *(s2 + i));
}
