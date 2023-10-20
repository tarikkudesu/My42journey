/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:47:25 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/24 19:48:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	n = nb - 1;
	while (n > 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
/*
int main()
{
	int j = 5;
	printf("%d", ft_iterative_factorial(j));
}
*/
