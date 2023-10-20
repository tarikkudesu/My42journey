/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:50:09 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/29 14:01:05 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*s2)
		return (NULL);
	while (*(s1 + i))
	{
		j = 0;
		while (*(s2 + j) && *(s1 + i + j) == *(s2 + j))
			j++;
		if (*(s2 + j) == '\0')
		{
			return (s1 + i);
		}
		i++;
	}
	return (s1);
}
int main()
{
	char	s1[] = "--------cd-----";
	char	s2[] = "cd";
	char *res = ft_strstr(s1, s2);
	printf("%s", res);

}
