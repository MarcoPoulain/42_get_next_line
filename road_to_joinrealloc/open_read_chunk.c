/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_chunk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:35:23 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 17:53:59 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "header.h"

int	main(void)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[6];

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 5);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		printf("chunk: %s\n", buffer);
		bytes_read = read(fd, buffer, 5);
	}
	if (bytes_read < 0)
	{
		perror("read failed");
		return (1);
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
*/
