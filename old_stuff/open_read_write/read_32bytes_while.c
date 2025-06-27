/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_32bytes_while.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:51:41 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 13:06:00 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[32];

	fd = open("openme.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 32);
	printf("Read returns: \"%zd\"\n", bytes_read);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 32);
		printf("Read returns: \"%zd\"\n", bytes_read);
	}
	if (close(fd) == -1)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
