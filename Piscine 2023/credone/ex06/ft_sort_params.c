/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:18:16 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/29 10:15:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write (1, &*s++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	if (*(s1 + i) == *(s2 + i))
		return (0);
	return (*(s1 + i) - *(s2 + i));
}

void ft_swap(char **s1, char **s2)
{
	char	*temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		return (0);
	i = 1;
	while (i < ac - 1)
	{
		j = 0;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
