/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:07:08 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 11:25:01 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct point
{
	int	i;
	int	j;
}	t_point;

typedef struct data
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;
	int	area;
}	t_data;

typedef struct map
{
	char	*src;
	char	**map;
	int		n;
	int		m;
	int		o;
	char	*err;
	t_data	d;
}	t_map;

typedef struct bsq
{
	t_map	*map;
}	t_bsq;

#endif
