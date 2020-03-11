/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:21:29 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 20:47:48 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_copy;
	const char	*src_copy;

	if (!dst && !src)
		return (NULL);
	dst_copy = dst;
	src_copy = src;
	while (n--)
		*dst_copy++ = *src_copy++;
	return (dst);
}
