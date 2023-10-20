/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:56:57 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/28 22:07:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int	*tab, unsigned int len)
{
	unsigned int	i;
	int	t;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
			t = tab[i];
		else
			t = tab[i + 1];
		i++;
	}
	return (t);
}

int	main()
{
	int tab[] = {1, 5, 47, 81, 9};
	printf("%d", max(tab, 5));
}
