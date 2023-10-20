/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:46:00 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/20 16:17:35 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
/*
int main(void)
{
	char src[] = "Helloooo";
	char dest[] = "Jelloooo";
	unsigned int n = 3;

	printf("%d", ft_strlcpy(src, dest, n));
}
*/
