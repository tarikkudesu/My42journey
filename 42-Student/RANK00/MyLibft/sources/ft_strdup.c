/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_strdup.c                            ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (*(s + i))
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (!ptr)
		return (NULL);
	while (*(s + i))
	{
		*(ptr + i) = *(s + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
