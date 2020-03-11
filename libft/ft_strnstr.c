/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:35:45 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/19 19:23:27 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;
	size_t j2;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && len)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			j2 = len;
			while (s1[i + j] && (s1[i + j] == s2[j]) && (j < len))
			{
				if (s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				j++;
				j2--;
			}
		}
		i++;
		len--;
	}
	return (NULL);
}
