/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:34:00 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 21:31:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str [i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "wdffgFREEF";
	printf("%s", ft_strupcase(str));
}
*/
