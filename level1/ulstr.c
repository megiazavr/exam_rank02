/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:42:12 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 17:51:44 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char *str)
{
	int i = 0;
	char c;

	while ((c = str[i]) != '\0')
	{
		if (c >= 65 && c <= 90)
			c += 32;
		else if (c >= 97 && c <= 122)
			c -= 32;
		write(1, &c, 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}