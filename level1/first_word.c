/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:05:51 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 15:39:04 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] == 32 || str[i] == 9)
		i++;
	while(str[i] != '\0' && str[i] != 32 && str[i] != 9)
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
		first_word(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}