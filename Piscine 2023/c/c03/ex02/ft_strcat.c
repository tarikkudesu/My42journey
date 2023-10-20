/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:30:25 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 10:40:41 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i))
		i++;
	j = 0;
	while (*(src + j))
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
	ft_strcat(dest, src);
	printf("%s", dest);
}
*/
