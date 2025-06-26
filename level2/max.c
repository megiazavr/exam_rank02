/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:39:30 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/26 17:42:26 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int max;

	if (len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int	max(int* tab, unsigned int len);

int	main(void)
{
	int arr[] = {3, 7, 2, 9, 4};
	printf("Max = %d\n", max(arr, 5));
	return (0);
}