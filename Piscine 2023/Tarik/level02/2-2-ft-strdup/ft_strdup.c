/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:28:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/28 17:33:30 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	len = 0;
	while (*(src + i))
		len++;
	s = (char *)malloc((len + 1) * sizeof(char));
	s[len] = '\0';
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}
