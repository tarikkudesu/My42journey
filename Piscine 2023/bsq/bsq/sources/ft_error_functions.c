/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:50:00 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 11:13:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_header.h"

int	ft_check_arr(char **map)
{
	int	i;

	i = 0;
	while (*map[i])
		i++;
	if (i == arrlen)
		return (1);
	return (0);
}

int	ft_check_lines(char **map)
{
	int	i;

	i = 0;
	while (*ma[i])
	{
		if (ft_strlen(*map[i] != linelen))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_char(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (*map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'o' && map[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_check_error(char **map)
{
	if (!ft_check_arr(map))
		printf("ERROR_MAP_LENGTH!");
	if (!ft_check_lines(map))
		printf("ERROR_MAP_LINES!");
	if (!ft_check_char(map))
		printf("ERROR_MAP_CHAR!");
}
