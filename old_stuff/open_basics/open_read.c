/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:08:44 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/18 15:23:54 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buffer[101];
	ssize_t	bytes_read;

	fd = open("openme.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 100);
	if (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		write(1, buffer, bytes_read);
	}
	if (close(fd) == -1)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
