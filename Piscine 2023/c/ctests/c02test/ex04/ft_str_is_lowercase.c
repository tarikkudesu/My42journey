/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:48:30 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 09:29:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
	char str[] = "DtreryP";
	int d = ft_str_is_lowercase(str);
	d = d + '0';
	write(1, &d, 1);

}
