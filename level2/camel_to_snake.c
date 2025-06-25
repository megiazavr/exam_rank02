/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:24:45 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 19:18:58 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *str)
{
	char c;
	int i;

	i = 0;
	while((c = str[i]) != '\0')
	{
		if (c >= 65 && c <= 90)
			{
				c += 32;
				write(1, "_", 1);
			}
		write(1, &c, 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		camel_to_snake(av[1]);
	write(1, "\n", 1);
	return (0);
}