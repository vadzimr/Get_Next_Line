/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:13:23 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/26 11:43:37 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s_join;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	if (!(s_join = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (s1[i])
	{
		s_join[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		s_join[i] = *s2;
		i++;
		s2++;
	}
	return (s_join);
}
