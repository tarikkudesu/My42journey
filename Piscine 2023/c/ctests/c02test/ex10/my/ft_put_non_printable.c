/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_non_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:53:56 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/19 11:56:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_revstr(char *str, int size)
{
    int i;
    char c;
    
    i = 0;
    while (i <= size && str[i] != 0)
    {
        c = str[i];
        str[i] = str[i + size];
        str[i + size] = c;
        i++;
        size++;
    }
    return (str);
}
void    ft_printchar(char *str)
{
    write(1, str, 1)
}

void    ft_putstr_non_printable(char *str)
{
    int     i;
    int     j;
    int     remaider;
    int     decimal;
    char    hexa[100];
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 32 || str[i] >= 122)
        {
            decimal = i;
            j = 0;
            while (decimal > 0)
            {
                if (decimal = 0)
                    decimal -= 1;
                remaider = decimal % 16;
                if (remainder < 10)
                    hexa[j] = remainder + '0';
                else
                    hexa[j] = remainder - 10 + 'A';
                decimal = decimal / 16;
                if (decimal = 0)
                    decimal += 1;
                j++;
            }
            ft_revstr(str, j);
        }
        else
            ft_print(str[i]);
    }
}

int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable.c;
}
