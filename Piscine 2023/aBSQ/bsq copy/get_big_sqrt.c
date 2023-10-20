/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_big_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:11:12 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 12:02:32 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers/ft_header.h"

/*
char m[8][16] = {
    "o..o............",
    "................",
    "................",
    "............o...",
    "............o...",
    "................",
    "o...............",
    "...o............"
};
*/
int	check_vertical(char **s, t_map *mp, int conv, t_point p)
{
	while (p.i >= conv)
	{
		if (s[p.i][p.j] == mp->o)
			return (0);
		(p.i)--;
	}
	return (1);
}

int	check_horz(char **s, t_map *mp, int conv, t_point p)
{
	while (p.j >= conv)
	{
		if (s[p.i][p.j] == mp->o)
			return (0);
		(p.j)--;
	}
	return (1);
}

void	deep_search(char **s, t_map *mp, t_data *d, t_point p)
{
	while (p.i < mp->n && p.j < mp->m && check_vertical(s, mp, d->x_start, p)
		&& check_horz(s, mp, d->y_start, p))
	{
		(p.i)++;
		(p.j)++;
	}
	if ((p.i - d->x_start) * (p.j - d->y_start) > d->area)
	{
		d->area = (p.i - d->x_start) * (p.j - d->y_start);
		mp->d.x_start = d->x_start;
		mp->d.y_start = d->y_start; 
		mp->d.x_end = p.i - 1;
		mp->d.y_end = p.j - 1;
		mp->d.area = (p.i - d->x_start) * (p.j - d->y_start);
	}
}

void	big_sqr(char **s, t_map *mp, t_data *d)
{
	t_point	p;

	p.i = 0;
	while (p.i < mp->n)
	{
		p.j = 0;
		while (p.j < mp->m)
		{
			if (s[p.i][p.j] != mp->o)
			{
				d->x_start = p.i;
				d->y_start = p.j;
				(p.i)++;
				(p.j)++;
				deep_search(s, mp, d, p);
			}
			p.j++;
		}
		p.i++;
	}
}

void	ft_print(char **mp, int n, int m)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putstr(*(mp + i), '\n');
		i++;
		write(1, "\n", 1);
	}
}

/*
#include <stdio.h>

int main()
{
	t_data	d;
	int		j;
	t_map	p;

	p.o = 'o';
	p.n = 8;
	p.m = 16;
	p.d.x_start = 0;
	p.d.y_start = 0;
	d.x_start = 0;
	d.x_end = 0;
	d.y_start = 0;
	d.y_end = 0;
	d.area = 0;

	big_sqrt(m, &p, &d);
	printf("dxs %d - dys %d ; dxe %d - dye %d ; area %d\n"
	,p.d.x_start,p.d.y_start,p.d.x_end,p.d.y_end,p.d.area);
	int i = p.d.x_start;
	print(m, p.n, p.m);
	
	printf("\n \nthe bigest square on map is \n \n");
	
	while (i <= p.d.x_end)
	{
		j = p.d.y_start;
		while(j <= p.d.y_end){
			m[i][j] = 'x';
			j++;
		}
		i++;
	}
	print(m, p.n, p.m);
	return (0);
}*/
