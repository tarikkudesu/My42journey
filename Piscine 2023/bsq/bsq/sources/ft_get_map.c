/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:06:22 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 11:13:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_header.h"

char	*ft_map_str(void)
{
	int		fd;
	int		bytes_read;
	char	map[3];

	fd = open("../map.txt", O_RDONLY);
	if (fd == -1)
		printf("error\n");
	bytes_read = read(fd, map, 34);
	if (bytes_read == -1)
		printf("error reading the file\n");
	return (map);
}

char	**ft_map_arr(char *map)
{
	int		i;
	int		j;
	int		linelen;
	char	**map_arr;

	i = 0;
	while (*(map + i) != '\n')
		i++;
	i++;
	linelen = 0;
	while (*(map + i + linelen) != '\n')
		linelen++;
	map_arr = (char **)malloc(sizeof(char *) * (SIZEOFARR + 1));
	if (!map_arr)
		printf("ERROR_FT_MAP_ARR");
	j = 0;
	while (j < SIZEOFARR)
	{
		map_arr[j] = ft_strndup((map + i), linelen);
		i += linelen + 1;
		j++;
	}
	*(map_arr + j) = NULL;
	return (map_arr); 
}
