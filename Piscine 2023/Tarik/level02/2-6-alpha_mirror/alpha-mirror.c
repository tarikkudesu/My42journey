/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha-mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:27:16 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/28 22:03:34 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alpha_mirror(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = 'z' - (*s - 'a');
			write(1, &*s, 1);
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			*s = 'Z' - (*s - 'A');
			write(1, &*s, 1);
		}
		else
			write (1, &*s, 1);
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_alpha_mirror(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
