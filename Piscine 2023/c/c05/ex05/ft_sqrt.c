/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:49:24 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/29 09:09:19 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while ((i * i) <= nbr)
	{
		if (i * i == nbr)
			return ((int)i);
		i++;
	}
	return (0);
}
/*
int main()
{
	int i = 1;
	while (i < 100)
	{
		printf("%d\t%d\n", i, ft_sqrt(i));
		i++;
	}
}
*/
