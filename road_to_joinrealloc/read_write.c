/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:00:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/28 17:52:42 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		fd;
	size_t	i;
	ssize_t	bytes_read;
	char	buffer[4];

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 4);
	while (bytes_read > 0)
	{
		i = 0;
		while (buffer[i] != '\n' && i < bytes_read)
		{
			ft_putchar(buffer[i]);
			i++;
		}
		if (buffer[i] == '\n')
		{
			ft_putchar(buffer[i]);
			break;
		}
		bytes_read = read(fd, buffer, 4);
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
