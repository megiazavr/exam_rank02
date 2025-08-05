#include <unistd.h>

void ft_putnbr(int i)
{
	unsigned int	n;

	if (i < 0)
	{
		write(1, "-", 1);
		n = -i;;
	}
	else
		n = i;
	if (n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

int if_prime(int n)
{
	if (n < 2)
		return (0);
	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char *av[])
{
	if (ac != 2 || ft_atoi(av[1]) <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int n = ft_atoi(av[1]);
	int sum = 0;
	while (n > 1)
	{
		if (if_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
