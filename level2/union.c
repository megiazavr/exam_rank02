/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:20:37 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/26 20:05:08 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int i;
	int seen[256] = {0};

	i = 0;
	while(s1[i])
	{
		if (!seen[(unsigned char)s1[i]])
		{
			seen[(unsigned char)s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!seen[(unsigned char)s2[i]])
		{
			seen[(unsigned char)s2[i]] = 1;
			write(1, &s2[i], 1);
		}
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}