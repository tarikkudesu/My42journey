/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:46:10 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/23 15:57:16 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dsi;
	unsigned int ssi;

	i = ft_strlen(dest);
	dsi = ft_strlen(dest);
	ssi = ft_strlen(src);
	if (size <= dsi)
		return (size + ssi);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dsi + ssi);
}

int	main()
{
	char	dest[] = "1337 42";
	char	src[] = "Born to code";
	ft_strlcat(dest, src, 14);
}
