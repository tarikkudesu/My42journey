/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_strtrim.c                           ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	ft_isset(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	char	*s;
	char	*st;

	s = (char *)s1;
	st = (char *)set;
	i = 0;
	j = ft_strlen(s) - 1;
	while (*(s + i) && ft_isset(*(s + i), st))
		i++;
	while (*(s + j) && ft_isset(*(s + j), st))
		j--;
	ptr = ft_substr(s, i, (j - i));
	return (ptr);
}
