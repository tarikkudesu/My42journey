#include <unistd.h>

int	ft_change(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else
		c = 'Z' - (c - 'A');
	return c;
}

void	ft_miror(char *s)
{
	int	i;
	int	c;

	i = 0;
	while (*(s + i))
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			c = ft_change(s[i]);
			write (1, &c, 1);
		}
		else
			write (1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_miror(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
