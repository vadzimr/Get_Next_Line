/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 19:07:31 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/25 20:20:42 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	long long	nb;
	int			i;
	char		*number_str;
	int			num_len;

	nb = n;
	i = 1;
	num_len = ft_numlen(n);
	if (!(number_str = malloc((num_len + 1) * sizeof(char))))
		return (NULL);
	number_str[num_len] = '\0';
	if (nb < 0)
	{
		number_str[0] = 45;
		nb *= -1;
	}
	if (n == 0)
		number_str[0] = '0';
	while (nb > 0)
	{
		number_str[num_len - i++] = (nb % 10) + 48;
		nb /= 10;
	}
	return (number_str);
}
