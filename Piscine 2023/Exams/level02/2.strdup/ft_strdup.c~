#include <unistd.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*tab;

	if (!src)
		return NULL;
	i = 0;
	while (*(src + i))
		i++;
	tab = (char *)nalloc(sizeof(char) * (i + 1));
	if (!tab)
		return NULL;
	*(tab + i) = '\0';
	while (!i)
	{
		*(tab + i) = *(src + i);
		i--;
	}
	return tab;
}

