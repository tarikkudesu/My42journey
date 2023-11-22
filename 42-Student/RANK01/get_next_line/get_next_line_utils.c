/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:46:50 by tamehri           #+#    #+#             */
/*   Updated: 2023/11/12 13:46:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_calloc(int count, int size)
{
	char	*buffer;
	int		i;

	buffer = malloc(count * size);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < count * size)
		*(buffer + i++) = 0;
	return (buffer);
}

char	*ft_strdup(char *s1)
{
	char	*dup;
	int		i;

	i = ft_strlen(s1);
	dup = ft_calloc(i + 1, sizeof(char));
	if (!dup)
		return (NULL);
	i = -1;
	while (s1[++i])
		dup[i] = s1[i];
	return (dup);
}

int	ft_strchr(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_join_lines(char *stat_line, char *buffer)
{
	char	*line;
	int		i;
	int		j;

	if (!stat_line)
		return (ft_strdup(buffer));
	line = malloc(ft_strlen(stat_line) + ft_strlen(buffer) + 1);
	if (!line)
		return (NULL);
	i = -1;
	j = -1;
	while (stat_line[++i])
		*(line + i) = *(stat_line + i);
	while (buffer[++j])
		*(line + i++) = *(buffer + j);
	*(line + i) = '\0';
	return (line);
}
