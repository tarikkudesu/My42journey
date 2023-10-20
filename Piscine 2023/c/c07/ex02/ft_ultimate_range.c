/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:59:04 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 16:34:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	*range = tab;
	while (i < size)
	{
		*(tab + i) = min + i;
		i++;
	}
	return (size);
}
/*
int main()
{
	int	min;
	int max;
	int	*ptr;
	min = 1;
	max = 9;
	printf("%d\n", ft_ultimate_range(&ptr, min, max));
	int i = 0;
	while (i < max - min)
	{
		printf("%d", ptr[i]);
		i++;
	}
}
*/
