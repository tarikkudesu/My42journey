/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_memset.c                            ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*str;
	size_t i;

	str = (char *)s;
	i = 0;
	while (i < len)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "----------";
	char c = '+';
	printf("%s\n", ft_memset(str, c, 19));
}
*/
