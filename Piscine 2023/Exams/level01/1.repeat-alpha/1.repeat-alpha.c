#include <unistd.h>
int	ft_repeat(char c)
{
	int	rep;
	if (c >= 'a' && c <= 'z')
		rep = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		rep = c - 'A' + 1;
	else
		rep = 1;
	return rep;
}
int	main(int ac, char **av)
{
	int	rep;

	if (ac == 2)
	{
		while (*av[1])
		{
			rep = ft_repeat(*av[1]);
			while (rep--)
				write (1, av[1], 1);
			*av[1]++;
		}
	}
	write (1, "\n", 1);
	return 0;
}
