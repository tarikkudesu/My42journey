/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:26:30 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/23 16:35:59 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char dest[] = "---------";
	char src[] = "Jelloo";

	ft_strlcpy(dest, src, 8);
	printf("%s", dest);
}
