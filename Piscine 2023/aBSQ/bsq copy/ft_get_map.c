/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:12:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/04 10:02:53 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_header.h"
#include <stdio.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

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

char	**ft_map_str(char *file)
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
	while (read(fd, &c, 1) != -1 && c != '\n')
	{
		if( c >= '0' & c <= '9')
			row = row * 10 + c - '0';
	}
	//printf("%d", row);
	while (read(fd, &c, 1) != -1 && c != '\n')
		column++;
	printf("%d\t%d\n", row, column);
	close(fd);
	return (ft_map_arr(row, column, file));
}



int	main()
{
	int	i;
	int	arrlen = 8;
	char	**m = ft_map_str("./map.txt");
	/*i = 0;
	while (i < 5)
	{
		ft_putstr(*(m + i));
		i++;
	}*/
	free(m);
}
