/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrayinch <vrayinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:21:38 by vrayinch          #+#    #+#             */
/*   Updated: 2020/02/28 13:00:07 by vrayinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int main(void)
{
int fd;
int fd1;

char buf[14];

fd = open("test_file.txt", O_RDONLY, 0);
printf("fd is: %d\n", fd);


read(fd1, buf, 5);

printf("buf: %s\n", buf);
    return (0);
}

