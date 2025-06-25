/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:21:32 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 17:39:39 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void search_and_replace(char *str, char  search, char replace)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == search)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 4)
		search_and_replace(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
	return (0);
}