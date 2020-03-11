/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:23:08 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/27 16:21:36 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;

	if (lst != NULL)
	{
		res = (t_list*)malloc(sizeof(t_list));
		if (res != NULL)
		{
			res = f(lst);
			res->next = ft_lstmap(lst->next, f);
			return (res);
		}
		return (NULL);
	}
	return (NULL);
}
