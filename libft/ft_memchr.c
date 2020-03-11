/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 09:05:34 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/24 09:28:58 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned const char	*src_copy;

	src_copy = src;
	while (n--)
	{
		if (*src_copy == (unsigned char)c)
			return ((void *)src_copy);
		src_copy++;
	}
	return (NULL);
}
