/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:21:38 by vrayinch          #+#    #+#             */
/*   Updated: 2020/02/28 20:43:48 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

int get_next_line(int fd, char **line)
{
    char buf[14];
    int bytes_read;

    *line = ft_strnew(1);
    
    while ((bytes_read = read(fd, buf, 1)))
    {
        if(ft_strchr(buf, '\n'))
        {
            return (1);
            break;
        }
        buf[bytes_read] = '\0';
        *line = ft_strjoin(*line, buf);
    }
    
return (1);

}

int main(int ac, char **av)
{
int fd;
char *str;
int res;

if (ac == 2)
	fd = open(av[1], O_RDONLY);
else
    return (0);

// while (res)
// {
//     res = get_next_line(fd, &str);
//     printf("str is: %s\n", str);
// 	ft_strdel(&str);
// }
get_next_line(fd, &str);
printf("str is: %s\n", str);
printf("\n");
get_next_line(fd, &str);
printf("str is: %s\n", str);
printf("\n");
get_next_line(fd, &str);
printf("str is: %s\n", str);
printf("\n");
get_next_line(fd, &str);
printf("str is: %s\n", str);
printf("\n");



// close(fd);
// return (0);
 }

