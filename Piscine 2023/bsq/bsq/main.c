/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:09:57 by tamehri           #+#    #+#             */
/*   Updated: 2023/10/02 16:51:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

int	ft_findy(int size, int i, int j)
{
	int y;
	int	x;
	x = i;
	y = j;
	while (i < SIZEOFARR && i < x + size)
	{
		j = y;
		while (j < SIZEOFLINE && j < y + size)
		{
			if (g_map[i][j] == 'o')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int		i;
	int		j;
	int		size;
	char	c;

	i = 0;
	c = 'o';
	if (ft_findy(8, 1, 4))
		printf("GOOD\n");
	while (i < SIZEOFARR)
	{
		j = 0;
		while (g_map[i][j] && j < SIZEOFLINE)
		{
			while (g_map[i][j] == c)
				j++;
			size = 1;
			while (ft_findy(size, i, j) && size < SIZEOFARR && size < SIZEOFLINE)
			{
				if (ft_findy(size, i, j) && !ft_findy(size, i, j))
					break;
				size++;
				printf("a = %d with i = %d, j = %d\n", size, i, j);
			}
			j++;
		}
		i++;
	}
	return (0);
}




/*
void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

char	**ft_revarr(char **s)
{
	int	i;

	i = 0;
	while (i < (8 / 2))
	{
		ft_swap(&*s[i], )

}
*/
