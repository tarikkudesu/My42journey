#include "get_next_line.h"

int main(void) 
{
	int 	fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	int i = -1;
	while (++i < 9)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			printf("ERROR");
		}
		printf("[%d]:%s\n", i, line);
	}
	close(fd);
	return (0);
}
