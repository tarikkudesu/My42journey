/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:30:23 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 11:03:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}

}
int ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int destsize;
	unsigned int srcsize;

	destsize = ft_sizeof(dest);
	srcsize = ft_sizeof(src);
	if (destsize >= size)
		return (size + srcsize);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}

int main()
{
	char dest[] = "Hello, ";
	char src[] = "World";
	unsigned int n = 13;

	ft_strlcat(dest, src, n);
	ft_putchar(dest);
}
