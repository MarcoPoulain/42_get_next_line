/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_gnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:51:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/28 17:52:32 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "header.h"

char	*mini_gnl(int fd)
{
	static char	*line;
	char		*tmp;
	char		buffer[7];
	ssize_t		bytes_read;
	size_t		i;

	read(fd, buffer, 7);

	return (line);
}
