/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:12:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 12:12:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_header.h"

char	*ft_map_str(void)
{
	char		**map;
	int		fd;
	char		buff[256];

	fd = open("../map.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("error openning file\n");
		return (NULL);
	}
	if (read(fd, buff, 256) == -1)
	{
		printf("error reading the file\n");
		return (NULL);
	}
	row = ft_baby_atoi(buff);
	while ()
	return (map);
}

char	**ft_map_arr(char *map)
{
	int		arrlen;
	int		j;
	int		linelen;
	char	**map_arr;

	arrlen = ft_baby_atoi(map);
	while (*map != '\n')
		map++;
	map++;
	linelen = 0;
	while (*(map + linelen) != '\n')
		linelen++;
	map_arr = (char **)malloc(sizeof(char *) * (arrlen + 1));
	
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
