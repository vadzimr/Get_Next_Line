/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 07:25:28 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/23 16:10:16 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	long	res_overflow;
	int		sign;

	res = 0;
	sign = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && (*str > 47 && *str < 58))
	{
		res_overflow = res;
		res = (res * 10) + (*str - 48);
		str++;
		if (res_overflow > res)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
	}
	return ((int)(res * sign));
}
