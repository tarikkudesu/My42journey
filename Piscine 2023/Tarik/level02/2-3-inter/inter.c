/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:33:55 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/28 17:53:39 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_check(char *s1, char *s2)
{
	int i;
	int	chara[225] = {0};

	i = 0;
	while (*(s2 + i))
	{
		chara[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while (*(s1 + i))
	{
		if (chara[(int)s1[i]] == 1)
		{
			chara[(int)s1[i]] = 2;
			write (1, &s1[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		ft_check(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
