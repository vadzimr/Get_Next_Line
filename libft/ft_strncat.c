/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:48:35 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/24 11:32:44 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s1_copy;

	s1_copy = s1;
	while (*s1)
		s1++;
	while (*s2 && n--)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*(s1++) = '\0';
	return (s1_copy);
}