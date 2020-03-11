/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:07:15 by vrayinch          #+#    #+#             */
/*   Updated: 2020/01/27 16:21:38 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->next = NULL;
		if (content == NULL)
		{
			list->content_size = 0;
			list->content = NULL;
			return (list);
		}
		else
			list->content_size = content_size;
		list->content = malloc(content_size);
		ft_memmove(list->content, content, content_size);
		return (list);
	}
	return (NULL);
}
