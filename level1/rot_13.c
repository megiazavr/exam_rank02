/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:55:37 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 17:03:13 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot(char *str)
{
	char	c;
	int	i;

	i = 0;
	while ((c = str[i]) != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{
			if (c <= 'm')
				c += 13;
			else
				c -= 13;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if (c <= 'M')
				c += 13;
			else
				c -= 13;
		}
	write(1, &c, 1);
	i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		rot(av[1]);
	write(1, "\n", 1);
}