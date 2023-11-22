/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:46:46 by tamehri           #+#    #+#             */
/*   Updated: 2023/11/12 13:46:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;

	line = NULL;
	if (fd < 0 || read(fd, line, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_get_line(fd);
	return (line);
}

char	*ft_get_line(int fd)
{
	static char	*stat_line;
	char		*line;
	char		*buffer;
	int			bytes_read;

	if (!stat_line)
		stat_line = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read >= 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), NULL);
		buffer[bytes_read] = '\0';
		stat_line = ft_join_lines(stat_line, buffer);
		if (ft_strchr(stat_line) >= 0 || read(fd, buffer, 0) == EOF)
			break ;
	}
	line = ft_extract_line(stat_line);
	stat_line = ft_remove_line(stat_line);
	return (line);
}

char	*ft_extract_line(char *stat_line)
{
	int		index;
	char	*line;
	int		i;

	index = ft_strchr(stat_line);
	if (index == -1)
		return (ft_strdup(stat_line));
	line = ft_calloc(index + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < index + 1)
	{
		*(line + i) = *(stat_line + i);
		i++;
	}
	*(line + i + 1) = '\0';
	return (line);
}

char	*ft_remove_line(char *stat_line)
{
	int		i;
	int		j;
	int		index;
	char	*new_stat_line;

	index = ft_strchr(stat_line);
	new_stat_line = ft_calloc(ft_strlen(stat_line) - index + 1, sizeof(char));
	if (!new_stat_line)
		return (NULL);
	i = 0;
	j = index + 1;
	while (*(stat_line + j))
	{
		*(new_stat_line + i) = *(stat_line + j);
		i++;
		j++;
	}
	*(new_stat_line + i) = '\0';
	free(stat_line);
	return (new_stat_line);
}
