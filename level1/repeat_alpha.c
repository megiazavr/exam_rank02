/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:13:14 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 16:28:19 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
	int i = 0;
	int j;
	int count;
	char c;

	while ((c = str[i]) != '\0')
	{
		if (c >= 'a' && c <= 'z')
			count = c - 'a' + 1;
		else if (c >= 'A' && c <= 'Z')
			count = c - 'A' + 1;
		else
			count = 1;

		j = 0;
		while (j < count)
		{
			write(1, &c, 1);
			j++;
		}
		i++;
	} 
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}