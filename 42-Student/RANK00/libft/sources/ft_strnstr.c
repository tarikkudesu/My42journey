/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_strnstr.c                           ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	char	*find;

	ptr = (char *)haystack;
	find = (char *)needle;
	i = 0;
	j = 0;
	if (!find)
		return (ptr);
	else if (!ptr && !find)
		return (NULL);
	while (*ptr && i < n)
	{
		while (*(ptr + j) == *find)
		{
			find++;
			j++;
		}
		if (!*find)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
/*
int main()
{
	size_t n = 5;
	char s1[] = "-----+++-----";
	char s2[] = "+++";
	printf("%s\n", ft_strnstr(s1, s2, n));
}
*/
