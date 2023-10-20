/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_result_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:45:32 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/04 09:21:32 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/ft_header.h"

void	ft_print_result(t_map *m)
{
	int	i;

	i = 0;
	while ((m + i) != NULL)
	{
		ft_putstr((m + i)->src);
		ft_putstr("\n");
		if ((m + i)->err != NULL)
		{
			big_sqr((m + i)->arr_map, m + i, &(m + i)->d);
			ft_print((m + i)->arr_map,(m + i));
		}
		else
			ft_putstr((m + i)->err);
		i++;
	}
}

t_map	*ft_single_map(t_map *m, char *s)
{
	m->src = s;
	m->arr_map = ft_map_str(m->src, m);
	if (!(m->arr_map))
	{
		m->err = "something goes wrong on this file";
		m->arr_map = NULL;
	}
	else
		m->err = NULL;
	return (m);
}

t_bsq	*get_result_file(t_bsq *b, char **av, int ac)
{
	int		i;
	t_map	*m;

	m = (t_map *)malloc(sizeof(t_map) * ac);
	if (m == NULL)
	{
		write(2, "MEMORY PROBLEME\n", 16);
		exit(1);
	}
	i = 0;
	while (*(av + i) != NULL)
	{
		ft_single_map((m + i), *(av + i));
		i++;
	}
	ft_print_result(b->map);
	b->map = m;
	return (b);
}
