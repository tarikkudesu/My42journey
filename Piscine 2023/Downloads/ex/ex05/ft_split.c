#include <stdlib.h>
#include <unistd.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (*(charset + i))
	{
		if (c == *(charset + i))
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		while (*(str + i) && is_separator(*(str + i), charset))
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && !is_separator(*(str + i), charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*(str + i) && !is_separator(*(str + i), charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		*(word + i) = *(str + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*(str))
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str)
		{
			*(strings + i) = ft_word(str, charset);
			i++;
		}
		while (*str && !is_separator(*str, charset))
			str++;
	}
	*(strings + i) = 0;
	return (strings);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
	
	char	**t = ft_split(*(argv + 1), *(argv + 2));
	while (*(t + i) != 0)
	{
		printf("%s\n", *(t + i));
		i++;
	}
	free(t);
	}
	return (0);
}
*/
