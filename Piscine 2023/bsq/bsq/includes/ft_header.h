/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:03:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 11:29:21 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define SIZEOFLINE 16
# define SIZEOFARR 8

char	*g_map[] = {
	"o..o............",
	"................",
	"................",
	"............o...",
	"............o...",
	"................",
	"o...............",
	"...o............"
};

// ../sources/ft_str_functions
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(char *s);
char	*ft_strdnup(char *src, int max);

// ../sources/ft_get_map.c
char	*ft_map_str(void);
char	**ft_map_arr(char *map);

// ../sources/ft_get_map_info.c
int		ft_baby_atoi(char *map);
char	ft_get_empty_char(char *map);
char	ft_get_obstacle_char(char *map);
char	ft_get_full_char(char *map);

// ../sources/ft_error_functions.c
int		ft_check_arr(char **map);
int		ft_check_lines(char **map);
int		ft_check_char(char **map);
void	ft_check_error(char **map);


#endif
