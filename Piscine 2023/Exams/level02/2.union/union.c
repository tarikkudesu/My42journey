#include <unistd.h>

int	ft_seen(char *str, char c, int max)
{
	int	i;

	i = 0;
	while (*(str + i) && i < max)
	{
		if (*(str + i) == c)
			return 0;
		i++;
	}
	return 1;
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (*(s1 + i))
	{
		if (ft_seen(s1, s1[i], i))
			write (1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		if (ft_seen(s2, s2[j], j) && ft_seen(s1, s2[j], i))
			write (1, &s2[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write (1, "\n", 1);
	return (0);
}
