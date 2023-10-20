/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:48:30 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 21:13:07 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == '\0')
				return (1);
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str[] = "sdfgfchgvhjbjnL";
	printf("%d", ft_str_is_lowercase(str));
}
*/
