/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:51:17 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 16:05:53 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char *av[])
{

	if (ac > 1)
		ft_putstr(av[1]);
	return (0);
}