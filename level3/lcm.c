#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
	while (b != 0)
	{
		unsigned int t = a % b;
		a = b;
		b = t;
	}
	return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	
	return (a / gcd(a, b) * b);
}

int main(void)
{
	printf("%u\n", lcm(12, 18));
	printf("%u\n", lcm(4, 6));
	printf("%u\n", lcm(0, 6));
}