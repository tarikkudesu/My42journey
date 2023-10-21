/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_split.c                             ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	ft_finallen(char const *s, char c)
{
	size_t	flen;

	flen = 0;
	if (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1))
			flen++;
		s++;
	}
	return (flen);
}

char	*ft_strs(char const *s, char c)
{
	size_t	i;
	size_t	slen;
	char	*str;

	slen = 0;
	i = 0;
	if (*s == c)
		s++;
	while (*(s + slen) && *(s + slen) != c)
		slen++;
	str = (char *)malloc((slen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*(s + i) != c && *(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	flen;
	char	**ptr;
	char	*str;

	str = (char *)s;
	if (!str || !c)
		return (NULL);
	flen = ft_finallen(s, c);
	ptr = (char **)malloc((flen + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < flen)
	{
		if (*str == c)
			str++;
		*(ptr + i) = ft_strs(str, c);
		while (*str != c)
			str++;
		i++;
	}
	*(ptr + i) = NULL;
	return (ptr);
}
/*
int main()
{
	printf("Good\n");
	char	str[] = "------------x---x--xxaaax";
	char	c = 'x';
	int	i;
	char	**split;
	split = ft_split(str, c);
	printf("%d\n", ft_finallen(str, c));
	i = 0;
	while (i < ft_finallen(str, c))
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/
