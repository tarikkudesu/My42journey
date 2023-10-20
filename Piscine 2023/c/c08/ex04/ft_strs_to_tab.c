/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:44:53 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/01 10:30:20 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	while (*(s + i))
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s;

	i = 0;
	s = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (NULL);
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		if (s[i].copy == NULL)
			return (NULL);
		i++;
	}
	s[i].str = NULL;
	return (s);
}
/*
int	main(int ac, char **av)
{
	//Don't forget to add 1 :|
	int	i;
	t_stocks_str	*s;
	s = ft_strs_to_tab(ac - 1, av);

	if (ac <= 1)
	{
		printf("Enter some arguments you fucking idiot !!");
		return (0);
	}
	i = 0;
	while (i < ac - 1)
	{
		printf("%d", i);
		printf("\tsize : %d\n", s[i].size);
		printf("\tstr  : %s\n", s[i].str);
		printf("\tcopy : %s\n", s[i].copy);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		free(s[i].copy);
		i++;
	}
	free (s);
}
*/
