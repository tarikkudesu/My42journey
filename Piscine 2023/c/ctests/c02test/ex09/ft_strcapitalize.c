/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:33:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 19:42:15 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;

	i = 0;
	newword = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			if (newword == 1)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
			}
			newword = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			newword = 0;
		}
		else
		{
			newword = 1;
		}
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots Quarante-deux; cinquante+et+un";
	char *bak = ft_strcapitalize(str);
	printf("%s", bak);
}
