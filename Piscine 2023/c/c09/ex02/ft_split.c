/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:25:28 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/05 08:30:12 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
//#include <stdio.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (*(charset + i))
	{
		if (c == *(charset + i))
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		while (*(str + i) && ft_is_separator(*(str + i), charset))
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && !ft_is_separator(*(str + i), charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*(str + i) && !ft_is_separator(*(str + i), charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		*(word + i) = *(str + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (ft_count_strings(str, charset) + 1));
	while (*(str))
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str)
		{
			*(strings + i) = ft_word(str, charset);
			i++;
		}
		while (*str && !ft_is_separator(*str, charset))
			str++;
	}
	*(strings + i) = 0;
	return (strings);
}

/*
int	main()
{
	char	str[] = "          v##########v##########v
####   v   ####   v   ####   v   ####   v   ####   v
s ######## v##########v###    ###v##########v##########v
###    ###v###    ###v          s######### v##########v
###    ###v##########v######### v###   ### v###    ###v
s##########v##########v   ####   v   ####   v   ####   v
##########v##########v          s###    ###v###   ### v
########  v#######   v###  ###  v###   ### v###    ###v
s";
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
