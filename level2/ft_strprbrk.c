/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprbrk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:46:25 by megiazar          #+#    #+#             */
/*   Updated: 2025/06/26 15:56:47 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (char *)&s1[i];
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main()
{
	char *s1 = "hl";
	char *s2 = "aeiou";

	char *res = ft_strpbrk(s1, s2);
	if (res)
		printf("First match: %c\n", *res);
	else
		printf("No match\n");
}