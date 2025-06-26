/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:45:54 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/26 17:52:30 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		while (s2[j] && s1[i] != s2[j])
			j++;
		if (!s2[j])
			return ;
		i++;
		j++;
	}
	write(1, s1, 1);
}

int main(int ac, char *av[])
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}