/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:51:49 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/25 21:11:52 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_copy;
	unsigned const char	*src_copy;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dst_copy = dst;
	src_copy = src;
	i = 0;
	if (src_copy < dst_copy)
		while (n--)
			dst_copy[n] = src_copy[n];
	else
		while (i < n)
		{
			dst_copy[i] = src_copy[i];
			i++;
		}
	return (dst);
}
