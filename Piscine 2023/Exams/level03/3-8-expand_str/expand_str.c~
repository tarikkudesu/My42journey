#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (*(s + i))
		i++;
	return i;
}

void	ft_expand_str(char *s)
{
	int i = 0;
	int end = ft_strlen(s) - 1;
	while (end > 0 && (s[end] == 32 || s[end] == '\t'))
		end--;
	while (*(s + i) && i < end)
	{
		while (s[i] && (s[i] == 32 || s[i] == '\t'))
			i++;
		while (s[i] && (s[i] != 32 && s[i] != '\t'))
		{
			write(1, &s[i], 1);
			i++;
		}
		if (s[i + 1] != '\0')
			write(1, "---", 3);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_expand_str(av[1]);
	write(1, "\n", 1);
}
