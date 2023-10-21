#include <unistd.h>

void	ft_epur_str(char *s)
{
	int	nw;

	nw = 1;
	while (*s)
	{
		while (*s && (*s == 32 || *s == '\t'))
			s++;
		while (*s && *s != 32 && *s != '\t')
		{
			write(1, &*s++, 1);
			nw = 0;
		}
		if (!nw)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_epur_str(av[1]);
	write(1, "\n", 1);
}
