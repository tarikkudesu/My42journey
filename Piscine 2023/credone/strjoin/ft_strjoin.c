/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:30:13 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/30 20:30:16 by tamehri          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

int	ft_flen(int size, char **strs, char *sep)
{
	int	i;
	int flen;

	i = 0;
	flen = 0;
	while (i < size)
	{
		flen += ft_strlen(strs[i]);
		flen += ft_strlen(sep);
		i++;
	}
	return (flen - ft_strlen(sep));
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*temp;
	int 	i;
	int		flen;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	flen = ft_flen(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (flen + 1));
	temp = res;
	i = 0;
	while (i < size)
	{
		ft_strcpy(temp, strs[i]);
		temp += ft_strlen(strs[i]);
		if (i != size - 1)
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		i++;
	}
	*temp = '\0';
	return (res);
} 

int main()
{
	char *strs[3] = {"hi", "there", "you fucking idiot"};
	char *sep = " ";
	char *bak;
	bak = ft_strjoin(3, strs, sep);
	printf("%s\n", bak);
}