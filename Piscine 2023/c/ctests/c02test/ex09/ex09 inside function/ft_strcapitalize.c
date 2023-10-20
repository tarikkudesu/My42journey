/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:33:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/18 17:34:57 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;
	char *strnew;

	i = 0;
	newword = 1;
	strnew = ft_strlowcase(str);
	while (strnew[i] != '\0')
	{
		if (strnew[i] >= 'a' && strnew[i] <= 'z' || strnew[i] >= 'A' && strnew[i] <= 'Z')
		{
			if (newword == 1)
			{
				if (strnew[i] >= 'a' && strnew[i] <= 'z')
					strnew[i] = strnew[i] - 32;
			}
			newword = 0;
		}
		else if (strnew[i] >= '0' && strnew[i] <= '9')
			newword = 0;
		else
			newword = 1;
		i++;
	}
	return (strnew);
}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots Quarante-deux; cinquante+et+un";
    char *bak = ft_strcapitalize(str);
    printf("%s", bak);
}
