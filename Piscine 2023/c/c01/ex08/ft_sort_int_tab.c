/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:36:34 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 23:04:05 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (tab[i] < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = j;
		}
		i++;
	}
	while (tab[i] != NULL)
	{
		printf("%d", tab[i]);
		i++;
	}

}

int main()
{
	ft_sort_int_tab(tab, 6);
}
