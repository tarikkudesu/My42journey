/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:35:11 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 20:11:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int	ft_checkbase(char *s)
{
	int	i;
	int	j;

	if (!(*s && *(s + 1)))
		return (0);
	i = 0;
	while (*(s + i))
	{
		j = i + 1;
		if (*(s + i) == '-' || *(s + i) == '+')
			return (0);
		while (*(s + j))
		{
			if (*(s + i) == *(s + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	if (!ft_checkbase(base))
		return (0);
	sign = 1;
	i = 0;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	
}
/*
int main()
{
	char str[] = "   +-1234j2";
	char base[] = "01";
	printf("%d", ft_atoi_base(str, base));
}
*/
