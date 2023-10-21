#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	if (*s < '0' || *s > '9')
		return 0;
	while (*s)
		res = res * 10 + *s++ - 48;
	return res;
}

void	ft_putnbr(int	nb)
{
	if (nb < 10)
		write(1, &"0123456789"[nb], 1);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1)
		return 0;
	i = 2;
	while (i < nb)
		if (!(nb % i++))
			return 0;
	return 1;
}

int	add_prime_sum(int nb)
{
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	while (i <= nb)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	return sum;
}

int	main(int ac, char **av)
{
	if (ac == 2 && ft_atoi(av[1]) > 0)
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
