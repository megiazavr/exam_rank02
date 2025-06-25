/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:07:23 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/25 20:18:30 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && accept[j] != s[i])
		{
			if (s[i] == accept[j])
				j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}