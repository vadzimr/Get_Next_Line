/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:21:38 by vrayinch          #+#    #+#             */
/*   Updated: 2020/03/09 17:55:48 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*cut_line(char **storage, int fd)
{
	char	*remainder_of_buff;
	char	*line;
	int		len;

	len = 0;
	while (storage[fd][len] != '\n' && storage[fd][len] != '\0')
		len++;
	if (storage[fd][len] == '\n')
	{
		line = ft_strsub(storage[fd], 0, len);
		remainder_of_buff = ft_strdup(&storage[fd][len + 1]);
		free(storage[fd]);
		storage[fd] = remainder_of_buff;
		if (storage[fd][0] == '\0')
			ft_strdel(&storage[fd]);
	}
	else
	{
		line = ft_strdup(storage[fd]);
		ft_strdel(&storage[fd]);
	}
	return (line);
}

int			get_next_line(const int fd, char **line)
{
	static char *storage[FD_COUNT];
	char		reading_buffer[BUFF_SIZE + 1];
	char		*tmp;
	int			bytes_read;

	while ((bytes_read = read(fd, reading_buffer, BUFF_SIZE)) > 0)
	{
		reading_buffer[bytes_read] = '\0';
		if (storage[fd] == NULL)
			storage[fd] = ft_strnew(1);
		tmp = ft_strjoin(storage[fd], reading_buffer);
		free(storage[fd]);
		storage[fd] = tmp;
		if (ft_strchr(storage[fd], '\n'))
			break ;
	}
	if (bytes_read < 0)
		return (-1);
	if (bytes_read == 0 && storage[fd] == NULL)
		return (0);
	*line = cut_line(storage, fd);
	return (1);
}
