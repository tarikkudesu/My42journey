/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:11:02 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/24 19:47:02 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*
int main()
{
	int nb;
	int	power;
	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
}
*/
