/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_memmove.c                           ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (src > dest)
		ft_memcpy(str1, str2, len);
	else if (dest > src)
	{
		while (i < len)
		{
			*(str1 + i) = *(str2 + i);
			i++;
		}
	}
	return (str1);
}

/*
int main()
{
        char    s1[] = "aaaaa";
        char    s2[] = "ssssss";
        printf("4->%s\n", (char *)ft_memmove(s1, s2, 4));
        printf("8->%s\n", (char *)ft_memmove(s1, s2, 8));
}
*/
