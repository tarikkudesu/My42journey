/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:27:05 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 08:26:28 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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
void    ft_putstr(char *s, int ft_eof);
char    *ft_strdup(char *src);
int     ft_strlen(char *src, int ft_of);
