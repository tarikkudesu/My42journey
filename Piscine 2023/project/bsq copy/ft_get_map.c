/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:12:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 22:29:34 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_header.h"
#include <stdio.h>
#include <fcntl.h>

char	**ft_generate_map(int r, int c, int fd, char **arr)
{
	int		i;
	int		j;
	char	b;

	while (read(fd, &b, 1) != -1 && b != '\n')
	{
		printf("%c",b);
	}
	printf("\n");
	i = 0;
	while (i < r)
	{
		arr[i] = (char *)malloc(sizeof(char) * (c + 1));
		if (arr[i] == NULL)
		{
			printf("erreur d'alloction");
			return NULL;
		}
		j = 0;
		while (j < c)
		{
			read(fd, &b, 1);
			arr[i][j] = b;
			j++;
		}
		read(fd, &b, 1);
		arr[i][j] = '\0';
		printf("%s\n",arr[i]);
		i++;
	}
	return (arr);
}

char	**ft_map_arr(int r,int c, char *file)
{
	int		fd;
	char	**map_arr;

	map_arr = (char **)malloc(sizeof(char *) * (r + 1));
	
	if (!map_arr)
	{
		printf("ERROR_FT_MAP_ARR");
		return (NULL);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("error openning file\n");
		return (NULL);
	}
	map_arr = ft_generate_map(r, c, fd, map_arr);
	close(fd);
	return (map_arr); 
}

int	ft_get_info(int fd, t_map *m)
{
	char	c;
	int		row;

	row = 0;
	while (read(fd, &c, 1) != -1 && c >= '0' & c <= '9')
			row = row * 10 + c - '0';
	read(fd, &(m->v), 1);
	read(fd, &(m->o), 1);
	return (row);
}

char	**ft_map_str(char *file, t_map *m)
{
	char		**map;
	int			fd;
	char		c;
	int			row;
	int			column;

	row = 0;
	column = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("error openning file\n");
		return (NULL);
	}
	row = ft_get_info(fd, m);
	while (read(fd, &c, 1) != -1 && c != '\n')
		column++;
	close(fd);
	m->n = row;
	m->m = column;
	m->arr_map = ft_map_arr(row, column, file);
	return (m->arr_map);
}

int	main()
{
	int	i;
	int	arrlen = 8;
	t_map	t;
	char	**m = ft_map_str("./map.txt", &t);
	i = 0;
	while (i < 5)
	{
		ft_putstr(*(m + i));
		i++;
	}
	free(m);
}