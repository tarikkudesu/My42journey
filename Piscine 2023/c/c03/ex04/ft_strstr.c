/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:35:47 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 14:58:44 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s2 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*(to_find + i))
		return (str);
	while (*(str + i))
	{
		if (ft_strcmp(str + i, to_find))
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str[] = "---------cd-----";
	char find[] = "cd";
	char *result = ft_strstr(str, find);
	printf("%s", result);
}
*/
