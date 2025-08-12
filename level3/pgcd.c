#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(unsigned int a, unsigned int b)
{
	while (b != 0)
	{
		unsigned int t = a % b;
		a = b;
		b = t;
	}
	return (a);
}

int main(int ac, char *av[])
{
	int a, b;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
	
		printf("%u\n", gcd(a, b));
	}
	else
		write(1, "\n", 1);
	return (0);
}