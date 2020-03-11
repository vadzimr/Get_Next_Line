/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:43:11 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/27 15:52:40 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_checker(char const *s, char c)
{
	size_t	i;
	int		flag;
	int		len;

	i = 0;
	flag = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			len++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i[3];

	i[0] = 0;
	i[2] = -1;
	if (!s || !c)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_checker(s, c) + 1))))
		return (NULL);
	while (++i[2] < ft_checker(s, c))
	{
		while (s[i[0]] == c && s[i[0]] != '\0')
			i[0]++;
		i[1] = i[0];
		while (s[i[1]] != c && s[i[1]] != '\0')
			i[1]++;
		str[i[2]] = ft_strsub(s, i[0], i[1] - i[0]);
		i[0] = i[1];
	}
	str[i[2]] = (NULL);
	return (str);
}
