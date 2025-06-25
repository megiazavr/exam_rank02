/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:00:16 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 20:08:43 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strcsnp(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while(s[i++])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j++])
				return (i);
		}
	}
	return (i);
}