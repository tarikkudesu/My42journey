/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:30:25 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/18 20:00:57 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
    printf("%s\n", src);
    printf("%s\n", dest);
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
    printf("%s\n", dest);
	return (dest);
}

int main()
{
    char dest[50] = "nothing is here";
    char src[] = "nothing is not here";
    //unsigned int n;
    char *bak;

    //n = 7;
    bak = ft_strcat(dest, src);

    printf("%s", bak);
}
