/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_hand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:22:36 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 08:39:42 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/tree.h"

/*
t_data	*creat_data(void)
{
	t_data	*d;

	d = (t_data *)malloc(sizeof(t_data));
	if (d == NULL)
		return (NULL);
	return (d);
}
*/

t_tree	*creat_tree(void)
{
	t_tree	*t;

	t = (t_tree *)malloc(sizeof(t_tree));
	if (t == NULL)
		return (NULL);
	t->fg = NULL;
	t->fg = NULL;
	t->d.x_start = 0;
	t->d.x_end = 0;
	t->d.y_start = 0;
	t->d.y_end = 0;
	t->d.area = 0;	
	return (t);
}

t_tree	*construct(t_tree *p, t_tree *g, t_tree *d)
{
	p->fg = g;
	p->fd = d;
	return (p);
}

t_tree	*add_noeud(t_tree *t, t_tree *add)
{
	if(t->d.area == 0)
		return (add);
	else if (t->fd == NULL)
		return (construct(t, t->fg, add));
	else if (add->d.area >= t->d.area)
		return (construct(t, t->fg, add_noeud(t->fd, add)));
	else
		return (construct(t, add_noeud(t->fg, add), t->fd));
}
