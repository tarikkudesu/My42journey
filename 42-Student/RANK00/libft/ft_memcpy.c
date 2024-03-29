/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:35:53 by tamehri           #+#    #+#             */
/*   Updated: 2023/11/03 10:57:19 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (++i < n)
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	return (dst);
}
