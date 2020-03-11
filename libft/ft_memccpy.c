/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:42:37 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/24 08:08:53 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_copy;
	unsigned const char	*src_copy;

	dst_copy = dst;
	src_copy = src;
	while (n--)
	{
		*dst_copy = *src_copy;
		if (*src_copy == (unsigned char)c)
			return (dst_copy + 1);
		dst_copy++;
		src_copy++;
	}
	return (NULL);
}
