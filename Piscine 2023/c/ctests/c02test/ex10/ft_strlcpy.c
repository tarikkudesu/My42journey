/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:56 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 19:44:03 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
    
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char src[] = "hello";
	char dest[3];
	int d = ft_strlcpy(dest, src, 3);
	d = d + '0';
	write(1, &d, 1);
}
