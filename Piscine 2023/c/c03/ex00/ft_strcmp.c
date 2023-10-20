/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:49:35 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/25 10:35:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;
	if (*(s1 + i) == *(s2 + i))
		return (0);
	else
		return (*(s1 + i) - *(s2 + i));
}

/*
int main()
{
	char s1[] = "Jelooo";
	char s2[] = "Jellooo";
	printf("%d", ft_strcmp(s1, s2));
}
*/
