/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:13:20 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/15 12:01:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int*b)
{
	int c;
	int d;


	printf("before\n%d\t%p\n", *a, a);
	printf("%d\t%p", *b, b);

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;

	printf("after\n%d\t%p\n", *a, a);
	printf("%d\t%p", *b, b);
}

int main()
{
	int a;
	int b;

	a = 42;
	b = 10;

	ft_ultimate_div_mod(&a, &b);

}
