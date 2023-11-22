/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:46:43 by tamehri           #+#    #+#             */
/*   Updated: 2023/11/12 13:46:43 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_get_line(int fd);
char	*ft_extract_line(char *stat_line);
char	*ft_remove_line(char *stat_line);

int		ft_strlen(char *s);
char	*ft_calloc(int count, int size);
char	*ft_strdup(char *s1);
int		ft_strchr(char *s);
char	*ft_join_lines(char *stat_line, char *buffer);

#endif
