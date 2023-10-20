/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:52:26 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 21:09:53 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

int	ft_final_length(char **strs, int size, int seplen)
{
	int	flen;
	int i;

	i = 0;
	flen = 0;
	while (i < size)
	{
		flen += ft_strlen(strs[i]); 
		if (i != size - 1)
			flen += seplen;
		i++;
	}
	return (flen);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		flen;
	int		i;

	if (size == 0)
	{
		res = (char*)malloc(1);
		res[0] = '\0';
		return res;
	}
	flen = ft_final_length(strs, size, ft_strlen(sep));
	res = (char*)malloc(flen + 1);
	if (!res)
		return (NULL);
	i = 0;
	char	*temp = res;
	while (i < size)
	{
		ft_strcpy(temp, strs[i]);
		temp += ft_strlen(strs[i]);
		if (i != size - 1 && sep)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		i++;
	}
	*temp = '\0';
	return (res);
}
/*
int	main()
{
	char	*strs[] = {"HELLO", "WORLD", "!"};
	char	src[] = ", ";
	char	*ptr;
	ptr = ft_strjoin(3, strs, src);
	printf("%s", ptr);
}
*/
