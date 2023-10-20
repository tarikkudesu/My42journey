/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:58:07 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/20 16:18:30 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = str[i];
		if ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z'))
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
int main ()
{
	char str[] = "rertyu54";
	printf("%d", ft_str_is_alpha(str));
}
*/
