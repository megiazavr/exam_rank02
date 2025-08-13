#include <unistd.h>

int ft_atoi(char *str)
{
	int i =0;
	int res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int i = 1;
		int n = ft_atoi(av[1]);;
	
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, "x", 1);
			ft_putnbr(n);
			write(1, "=", 1);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}