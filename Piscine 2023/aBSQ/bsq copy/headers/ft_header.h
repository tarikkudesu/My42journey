/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:13 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 15:06:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_bsq.h"

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

//bsq handling

t_bsq	*create_b(void);
t_bsq	*get_result_file(t_bsq *bsq, char **v);
t_bsq   *get_result_in(t_bsq bsq);

//map handling

int	check_vertical(char **s, t_map *mp, int conv, t_point p);
int	check_horz(char **s, t_map *mp, int conv, t_point p);
void	deep_search(char **s, t_map *mp, t_data *d, t_point p);
void	big_sqr(char **s, t_map *mp, t_data *d);
char    **get_map(char *file);

//string handling

void	ft_print(char **mp, int n, int m);
void    ft_putstr(char *str);
char    *ft_strdup(char *src);
int     ft_strlen(char *src, int ft_of);
