/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_memcpy.c                            ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	i = 0;
	str1 = (char *)dest;
	str2 = (const char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	return (str1);
}
/*
int main()
{
	char	s1[] = "aaaaaaaaaaaaa";
	char	s2[] = "ssssss";
	printf("5->%s\n", (char *)ft_memcpy(s1, s2, 5));
	printf("8->%s\n", (char *)ft_memcpy(s1, s2, 8));
}
*/
