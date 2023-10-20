/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:07:08 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 11:13:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_header.h"

int	ft_baby_atoi(char *map)
{
	int	arrlen;

	arrlen = 0;
	while (*map >= '0' && *map <= '9')
		arrlen = arrlen * 10 + *map++ - 48;
	return (arrlen);
}

char	ft_get_empty_char(char *map)
{
	while (*map >= '0' && *map <= '9')
		map++;
	return (*map);
}

char	ft_get_obstacle_char(char *map)
{
	while (*map >= '0' && *map <= '9')
		map++;
	return (*(map + 1));
}

char	ft_get_full_char(char *map)
{
	while (*map >= '0' && *map <= '9')
		map++;
	return (*(map + 2));
}
