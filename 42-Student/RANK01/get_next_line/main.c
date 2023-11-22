/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:46:37 by tamehri           #+#    #+#             */
/*   Updated: 2023/11/12 13:46:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void) 
{
	int 	fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	int i = -1;
	while (++i < 4)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			printf("ERROR");
		}
		printf("%s\n", line);
	}
	close(fd);
	return (0);
}
