#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res = 0;

	i = 0;
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		res = res * 10 + *(s + i) - 48;
		i++;
	}
	return res;
}

void	ft_print_hex(int nb)
{
	int	i;

	i = 0;
	if (nb < 16)
		write(1, &"0123456789abcdef"[nb], 1);
	else
	{
		ft_print_hex(nb / 16);
		ft_print_hex(nb % 16);
	}	
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}
