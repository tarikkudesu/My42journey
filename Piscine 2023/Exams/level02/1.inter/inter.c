#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	ascii[256] = {0};
	
	i = 0;
	while (*(s2 + i))
	{
		ascii[s2[i]] = 1;
		i++;
	}
	i = 0;
	while (*(s1 + i))
	{
		if (ascii[s1[i]])
		{
			ascii[s1[i]] == 0;
			ft_putchar(s1[i]);
		}
		i++;
	}/*
	while (i < 156)
	{
		printf("%d", ascii[i]);
		i++;		
	}*/
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
