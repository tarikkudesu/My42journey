/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:00:12 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 10:44:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	if (nb < 1)
		return (dest);
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) && j < nb)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int main()
{
	char dest[20] = "Hellooooo";
	char src[] = "Jeloooooo";
	ft_strncat(dest, src, 5);
	printf("%s", dest);
}
*/
