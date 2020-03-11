/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 20:44:59 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/27 16:09:15 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	res;

	sign = 1;
	res = 0;
	if (n < 0)
	{
		sign = -1;
		write(fd, "-", 1);
	}
	if (n < -9 || n > 9)
	{
		ft_putnbr_fd(n / 10 * sign, fd);
		ft_putnbr_fd(n % 10 * sign, fd);
	}
	if (n >= -9 && n <= 9)
	{
		res = n * sign + '0';
		write(fd, &res, 1);
	}
}
