#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	char c;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			c += 32;
		if ((c >= 'a' && c <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i] == '\0'))
			c -= 32;
		write(1, &c, 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	int i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}