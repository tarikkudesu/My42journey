/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   ft_itoa.c                              ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	ft_slen(int n)
{
	size_t	slen;
	long	nb;

	nb = n;
	slen = 0;
	if (nb == 0)
		slen++;
	if (nb < 0)
	{
		slen++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		slen++;
	}
	return (slen);
}

char	*ft_itoa(int n)
{
	size_t	slen;
	char	*str;
	long	nb;

	nb = n;
	slen = ft_slen(n);
	str = (char *)malloc((slen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[slen--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[slen] = nb % 10 + 48;
		nb /= 10;
		slen--;
	}
	return (str);
}
