/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:25:28 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/05 08:21:23 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

int	ft_charset(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

char	*ft_strndup(char *s, int m)
{
	int		i;
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*(s + i) && i < m)
	{
		*(res + i) = *(s + i);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}

int	ft_arrlen(char *s, char *sep)
{
	int	i;
	int	arrlen;

	i = 0;
	arrlen = 0;
	while (*(s + i))
	{
		while (*(s + i) && ft_charset(*(s + i), sep))
			i++;
		if (*(s + i) && !ft_charset(*(s + i + 1), sep) && *(s + i + 1))
			arrlen++;
		while (*(s + i) && !ft_charset(*(s + i), sep))
			i++;
	}
	return (arrlen);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		end;
	int		arri;
	int		arrlen;
	char	**array;

	arrlen = ft_arrlen(str, charset);
	array = (char **)malloc (sizeof(char *) * (arrlen + 1));
	if (!array)
		return (NULL);
	i = 0;
	arri = 0;
	while (*(str + i))
	{
		while (*(str + i) && ft_charset(*(str + i), charset))
			i++;
		j = i;
		end = 0;
		while (*(str + i) && !ft_charset(*(str + i), charset))
		{
			end++;
			i++;
		}
		array[arri] = ft_strndup((str + j), end);
		arri++;
	}
	array[arri] = NULL;
	return (array);
}
/*
int	main()
{
	char	str[] = "          v##########v##########v   ####   v   ####   v   ####   v   ####   v   ####   v          s ######## v##########v###    ###v##########v##########v###    ###v###    ###v          s######### v##########v###    ###v##########v######### v###   ### v###    ###v          s##########v##########v   ####   v   ####   v   ####   v##########v##########v          s###    ###v###   ### v########  v#######   v###  ###  v###   ### v###    ###v          s";
	char	sep[] = "vs";
	char	**array = ft_split(str, sep);
	int i = 0;
	while (*(array + i))
	{
		printf("%s\n", *(array + i));
		i++;
	}
}
*/
