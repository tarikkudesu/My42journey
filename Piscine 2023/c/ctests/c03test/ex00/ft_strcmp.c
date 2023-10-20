/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:49:35 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/18 19:12:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	s1s;
	int s2s;

	s1s = 0;
	while (s1[s1s] != '\0')
	{
		s1s++;
	}
	s2s = 0;
	while (s2[s2s] != '\0')
	{
		s2s++;
	}
	if (s1s == s2s)
		return (0);
	else if (s1s > s2s)
		return (1);
	else
		return (-1);
}

int main()
{
	char s1[] = "nothing is here";
	char s2[] = "something is not here";
	int n;

	n = ft_strcmp(s1, s2);
	printf("%d", n);
}
