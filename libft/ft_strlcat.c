/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 18:46:28 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/27 09:30:12 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_copy;
	size_t	i_copy;
	size_t	j;

	i = 0;
	j = 0;
	size_copy = 0;
	while (dst[i])
		i++;
	i_copy = i;
	if (i < size)
	{
		while (src[j] && size - i - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (size < i_copy)
		size_copy = i_copy - size;
	return (i_copy + ft_strlen(src) - size_copy);
}
