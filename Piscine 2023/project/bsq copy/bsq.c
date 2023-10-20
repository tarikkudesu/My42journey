/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:38:36 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/03 20:17:28 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/ft_header.h"

t_bsq	*create_b(void)
{
	t_bsq	*bsq;

	bsq = (t_bsq *)malloc(sizeof(t_bsq));
	if (bsq == NULL)
		return (NULL);
	bsq->map = NULL;
	return (bsq);
}
