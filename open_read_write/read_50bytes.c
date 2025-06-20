/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_50bytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:41:30 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 13:22:05 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buffer[50];
	ssize_t	bytes_read;

	fd = open("openme.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 50);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 50);
	}
	if (close(fd) == -1)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
