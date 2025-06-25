/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:38:53 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 16:54:53 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
}