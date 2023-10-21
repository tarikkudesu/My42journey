#include <unistd.h>
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	res;

	i = 0;
	if (!tab[i])
		return 0;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
			res = tab[i + 1];
		else 
			res = tab[i];
		i++;
	}
	return res;
}

int	main()
{
	int	tab[] = {1, 5, 9, 3, 10};
	int	res;

	res = max(tab, 5);
	printf("%d", res);
}
