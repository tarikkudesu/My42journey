/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:11:00 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/18 19:29:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int    s1s;
    int s2s;

    s1s = 0;
    while (s1[s1s] != '\0' && s1s < n)
    {
        s1s++;
    }
    s2s = 0;
    while (s2[s2s] != '\0' && s2s < n)
    {
        s2s++;
    }
    if (s1s == s2s)
        return (0);
    else if (s1s > s2s)
        return (1);
    else
        return (-1);
}

int main()
{
    char s1[] = "nothing is here";
    char s2[] = "nothing is not here";
	unsigned int n;
    int bak;

	n = 7;
    bak = ft_strncmp(s1, s2, n);
    printf("%d", bak);
}
