/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:23:48 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 21:23:53 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			if (str[i] == '\0')
				return (1);
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main()
{
	char str[] = "retdtfhj9876ytfh/";
	printf("%d", ft_str_is_printable(str));
}
*/
