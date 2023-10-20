/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:58:02 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 17:38:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i < nb / 2)
		{
			if (!(nb % i))
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*
int main()
{
	int i = 0;
	while (i <= 16)
	{
		printf("%d\t%d\n", i, ft_find_next_prime(i));
		i++;
	}
}
*/
