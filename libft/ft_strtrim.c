/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:37:19 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/26 20:45:27 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
		i++;
	j = (ft_strlen(s) - 1);
	if (s[i])
	{
		while (s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
			j--;
	}
	if (!(str = ft_strnew((j - i) + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), ((j - i) + 1));
	return (str);
}
