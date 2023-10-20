/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:17:17 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 16:21:16 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*tab;

	range = max - min;
	if (max <= min)
		return (NULL);
	tab = malloc(range * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < range)
	{
		*(tab + i) = min + i;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int i = 0;
	int min = 1;
	int	max = 7;
	int	*ptr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", ptr[i]);
		i++;
	}
}
*/
