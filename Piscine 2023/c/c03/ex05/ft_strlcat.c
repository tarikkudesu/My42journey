/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:30:23 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 11:06:29 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_sizeof(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destsize;
	unsigned int	srcsize;

	i = 0;
	destsize = ft_sizeof(dest);
	srcsize = ft_sizeof(src);
	if (destsize >= size)
		return (size + srcsize);
	while (*(dest + i))
		i++;
	j = 0;
	while (*(src + j) && i < size - 1)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (destsize + srcsize);
}
/*
int	main()
{
#include <unistd.h>
#include <unistd.h>
	char dest[] = "-----";
	char src[] = "+++";
	printf("%d", ft_strlcat(dest, src, 8));
}
*/
