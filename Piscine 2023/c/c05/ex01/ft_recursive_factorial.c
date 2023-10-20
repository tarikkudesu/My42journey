/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:07:56 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/24 19:59:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	n = nb - 1;
	nb = nb * ft_recursive_factorial(n);
	return (nb);
}

/*
int main()
{
	int nb = 5;

	printf("%d", ft_recursive_factorial(nb));
}
*/
