/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:38:07 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/26 08:48:26 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (*(str + i) <= 57 && *(str + i) >= 48)
	{
		result = result * 10 + *(str + i) - 48;
		i++;
	}
	return (sign * result);
}
/*
int main()
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}
*/
