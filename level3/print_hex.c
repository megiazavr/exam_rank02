#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void put_hex(int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		put_hex(n / 16);
	char c = hex[n % 16];
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
		put_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}