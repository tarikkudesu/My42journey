/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:51:20 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/03 11:16:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strndup(char *src, int max)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((max + 1) * sizeof(char));
	if (!str)
		printf("ERROR_STRNDUP");
	while (i < max)
	{
		*(str + i) = *(src + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
