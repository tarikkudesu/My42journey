/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_result_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:45:32 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/04 12:56:30 by ooulcaid         ###   ########.fr       */
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
		if ((m + i)->err != NULL)
		{
			t_data	d;
			int	j;
			j = 0;
			while (j < 5)
			{
				ft_putstr(m->arr_map[j]);
				ft_putstr("\n");
				j++;
			}
			(m + i)->d = big_sqr((m + i)->arr_map, m + i, &d);
			j = 0;
			while (j < 5)
			{
				ft_putstr(m->arr_map[j]);
				ft_putstr("\n");
				j++;
			}
			printf("dxs %d - dys %d ; dxe %d - dye %d ; area %d\n",(m + i)->d.x_start,(m + i)->d.y_start,(m + i)->d.x_end,(m + i)->d.y_end,(m + i)->d.area);
			ft_replace(m + i);
		}
		i++;
	}
}
	/*		ft_print((m + i)->arr_map,(m + i));
		}
		else
			ft_putstr((m + i)->err);
		i++;
	}*/

t_map	*ft_single_map(t_map *m, char *s)
{
	m->src = s;
	m->arr_map = ft_map_str(m->src, m);
	int i = 0;
/*	while (i < 5)
	{
		ft_putstr(m->arr_map[i]);
		ft_putstr("\n");
		i++;
	}*/
	if (!(m->arr_map))
	{
		m->err = "map error";
		m->arr_map = NULL;
	}
	else
	{
		m->err = NULL;
		m->d.x_start = 0;
		m->d.y_start = 0;
		m->d.x_end = 0;
		m->d.y_end = 0;
		m->d.area = 0;
	}
	return (m);
}

t_bsq	*get_result_file(t_bsq *b, char **av, int ac)
{
	int		i;
	t_map	*m;

	m = (t_map *)malloc(sizeof(t_map) * ac);
	if (m == NULL)
	{
		write(2, "map error\n", 16);
		exit(1);
	}
	i = 0;
	while (*(av + i) != NULL)
	{
		ft_single_map((m + i), *(av + i));
		i++;
	}
	b->map = m;
	ft_print_result(m);
	return (b);
}
