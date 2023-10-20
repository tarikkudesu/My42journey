/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:10 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/28 19:45:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	has_been_seen(char *s, char c, int m)
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
		if (has_been_seen(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		if (has_been_seen(s1, s2[j], i) && has_been_seen(s2, s2[j], j))
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
