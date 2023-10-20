/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:11:00 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 10:32:40 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && i < n - 1)
		i++;
	if (*(s1 + i) == *(s2 + i))
		return (0);
	else
		return (*(s1 + i) - *(s2 + i));
}
/*
int main()
{
	char s1[] = "---aellooooo";
	char s2[] = "---bJeloooooo";

	printf("%d", ft_strncmp(s1, s2, 5));
}
*/
