#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int	ft_rot_13(char c)
{
	if (c <= 'm' && c >= 'a' || c <= 'M' && c >= 'A')
		c += 13;
	else if (c >= 'n' && c <= 'z' || c <= 'Z' && c >= 'N')
		c -= 13;
	return c;
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			av[1][i] = ft_rot_13(av[1][i]);
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}
