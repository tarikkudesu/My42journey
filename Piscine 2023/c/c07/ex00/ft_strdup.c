/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:32:26 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 16:49:10 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	if (!src)
		return (NULL);
	i = 0;
	while (*(src + i))
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
/*
int	main()
{
	char	*p;
	char	s[] = "shitttyyyyy dayyyy";
	p = ft_strdup(s);
	printf("%s", p);
}
*/
