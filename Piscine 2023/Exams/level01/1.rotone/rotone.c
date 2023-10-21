#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rotone(char *s)
{
	int	i;
	char	t;

	i = 0;
	while (*(s + i))
	{
		t = *(s + i);
		if (t == 'z' || t == 'Z')
			ft_putchar(*(s + i) - 25);
		else if (t >= 'a' && t < 'z' || t >= 'A' && t < 'Z')
			ft_putchar(*(s + i) + 1);
		else
			ft_putchar(*(s + i));
		i++;
	}
}

int	main(int ac, char **av)
{

	if (ac == 2)
		rotone(*(av + 1));
	write (1, "\n", 1);
	return (0);
}
