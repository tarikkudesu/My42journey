/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:23:48 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 09:28:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
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
	return(1);
}

int main()
{
	char str[] = "werty5()";
	int d = ft_str_is_printable(str);
	d = d + '0';
	write(1, &d, 1);
}
