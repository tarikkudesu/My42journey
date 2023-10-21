#include <stdio.h>

int	isvalid(char c, int base)
{
	char	d1[17] = "0123456789abcdef";
	char	d2[17] = "0123456789ABCDEF";
	while (base)
	{
		if (c == d1[base] || c == d2[base])
			return 1;
		base--;
	}
	return 0;
}
int	valueof(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return 0;

}
int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;

	res = 0;
	while (*str <= 32)
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : 0;
	while (*str && isvalid(*str, str_base))
	{
		printf("%c\t", *str);
		printf("%d\n", res);
		res = res * str_base + valueof(*str++);
	}
	return res * sign;

}

int	main()
{
	printf("%d\n", ft_atoi_base("1A3", 16));
}
