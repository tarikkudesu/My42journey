#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write (1, &*s++, 1);
}

int	ft_check(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (*(s1 + len))
		len++;
	i = 0;
	j = 0;
	while (*(s2 + i) && j < len)
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (j == len)
		return 1;
	return 0;
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		if (ft_check(av[1], av[2]))
			ft_putstr(av[1]);
	}
	write (1, "\n", 1);
	return 0;
}
