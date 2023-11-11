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
char	*get_line(int fd);
char	*extract_line(char *stat_line);
char	*remove_line(char *stat_line);

int	ft_strlen(char *s);
char	*ft_calloc(int count, int size);
char	*ft_strdup(char *s1);
int	ft_strchr(char *s);
char	*join_lines(char *stat_line, char *buffer);

#endif
