/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_upperxase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:09:11 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 09:28:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

int main()
{
	char str[] = "SDoFGHJKL";
	int d = ft_str_is_uppercase(str);
	d = d + '0';
	write(1, &d, 1);
}
