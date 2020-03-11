/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:55:15 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/22 07:46:34 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	int word_size;

	word_size = 128;
	while (word_size)
	{
		if (octet >= word_size)
		{
			write(1, "1", 1);
			octet %= word_size;
		}
		else
			write(1, "0", 1);
		word_size /= 2;
	}
}
