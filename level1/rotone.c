/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:04:00 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 17:18:25 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *str)
{
	int i;
	char c;

	i = 0;
	while ((c = str[i]) != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{
			if (c == 'z')
				c = 'a';
			else
				c += 1;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if (c == 'Z')
				c = 'A';
			else
				c += 1;
		}
		write(1, &c, 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}