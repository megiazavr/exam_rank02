/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:52:36 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 18:22:50 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
	char c;
	int i;

	i = 0;
	while ((c = str[i]) != '\0')
	{
		if (c >= 65 && c <= 90)
			c = 90 - c + 65;
		else if (c >= 97 && c <= 122)
			c = 122 - c + 97;
		write(1, &c ,1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}