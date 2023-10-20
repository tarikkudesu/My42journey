/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_result_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:45:32 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/02 15:47:36 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/ft_header.h"

t_map	*single_map(t_map *m, char *s);
char	**get_map(char *s);
//t_tree	*get_possibilities(t_tree *t, char **m);

t_bsq	*get_result_file(t_bsq *b, int ac, char **av)
{
	int		i;
	t_map	*m;

	m = (t_map *)malloc(sizeof(t_map) * (ac + 1));
	if (m == NULL)
	{
		write(2, "MEMORY PROBLEME", 15);
		exit(FAILURE);
	}
	i = 0;
	while (i < ac)
	{
		*(m + i) = ft_single_map(*(m + i), *(av + i));
		i++;
	}
	*(m + i) = NULL;
	b->map = m;
	return (b);
}

t_map	*single_map(t_map *m, char *s);
{
	m->src = s;
	m->map = ft_map_arr(s);
	if (!(m->map))
	{
		m->err = "something goes wrong on this file";
		m->result = NULL;
	}
	else
	{
		m->err = NULL;
		m->result = get_possibilities(m->result, m->map);
	}
	return (m);
}
