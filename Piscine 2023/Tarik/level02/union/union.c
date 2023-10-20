/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:14:04 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/29 13:33:15 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	seen(char *s, char c, int m)
{
	int	i;

	i = 0;
	while (*(s + i) && i < m)
	{
		if (*(s + i) == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (*(s1 + i))
	{
		if (seen(s1, *(s1 + i), i))
			write(1, &*(s1 + i), 1);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		if (seen(s2, *(s2 + j), j) && seen(s1, *(s2 + j), i))
			write(1, &*(s2 + j), 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
