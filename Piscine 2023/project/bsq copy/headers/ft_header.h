/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:06:13 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 22:50:12 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_bsq.h"

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

//bsq handling

t_bsq	*create_b(void);
t_bsq	*get_result_file(t_bsq *bsq, char **av, int ac);
t_bsq   *get_result_in(t_bsq bsq);

//map handling

int	check_vertical(char **s, t_map *mp, int conv, t_point p);
int	check_horz(char **s, t_map *mp, int conv, t_point p);
void	deep_search(char **s, t_map *mp, t_data *d, t_point p);
void	big_sqr(char **s, t_map *mp, t_data *d);
char    **get_map(char *file);
char	**ft_map_str(char *src, t_map *m);
void    ft_print_result(t_map *m);
t_map   *ft_single_map(t_map *m, char *s);
void	ft_print(char **mp, t_map *p);

//string handling

void    ft_putstr(char *str);
char    *ft_strdup(char *src);
int     ft_strlen(char *src);

