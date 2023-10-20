#include <stdlib.h>

int	exist(char c, char *base);

int	len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_atoi(char *n, char *b)
{
	int	i;
	int	result;
	int	p;
	int	l;

	l = len(b);
	i = 0;
	result = 0;
	p = exist(*(n + i), b);
	while (p != -1)
	{
		result = (result * l) + p;
		i++;
		p = exist(*(n + i), b);
	}
	return (result);
}

int	len_nbr(int nbr, char *base)
{
	int				l;
	int				b;
	unsigned int	nb;

	l = 0;
	b = len(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		l++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)b)
	{
		nb /= b;
		l++;
	}
	l++;
	return (l);
}

void	ft_putnbr_base(int nbr, char *base_to, char *nbf)
{
	int		b;
	long	nb;
	int		i;
	int		ln;

	b = len(base_to);
	ln = len_nbr(nbr, base_to);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		*nbf = '-';
		nb *= -1;
		i = 1;
	}
	ln--;
	while (nb >= b)
	{
		*(nbf + ln) = *(base_to + (nb % b));
		nb /= b;
		ln--;
	}
	if (nb < b)
		*(nbf + i) = *(base_to + nb);
}
