/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:54:21 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/24 11:15:10 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc((n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[i] && n--)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
