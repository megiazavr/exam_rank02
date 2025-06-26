/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:54:48 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/26 17:12:24 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	int end = i;
	while (i >= 0 && (str[i] != ' ' && str[i] != '\t'))
		i--;
	i++;
	while (i <= end)
		write (1, &str[i++], 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}