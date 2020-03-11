/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 06:52:32 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/19 19:18:56 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[j] && s1[i + j] == s2[j])
				j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
