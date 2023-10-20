/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:30:09 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 08:54:05 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!(*base && *(base + 1)))
		return (0);
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_printnbr_base(long n, long b, char *base)
{
	long	m;

	if (n < b)
		write (1, &base[n], 1);
	else
	{
		ft_printnbr_base(n / b, b, base);
		m = n % b;
		write (1, &base[m], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bsi;
	int		error;
	long	nb;

	nb = nbr;
	error = ft_checkbase(base);
	bsi = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (error)
	{
		ft_printnbr_base(nb, bsi, base);
	}
}

/*
int main()
{
	char	base[] = "01";
	ft_putnbr_base(123, base);
	write (1, "\n", 1);
}
*/
