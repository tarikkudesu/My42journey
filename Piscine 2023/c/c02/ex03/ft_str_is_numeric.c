/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:21:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 21:06:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char str[] = "12398765";
	printf("%d", ft_str_is_numeric(str));
}
*/
