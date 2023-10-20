/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:58:07 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/17 08:45:43 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
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
	char str[] = "y9twre";
	int d = ft_str_is_alpha(str);
	d = d + '0';
	write(1, &d, 1);

}
