/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_until_something.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:54:22 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 15:42:43 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	ssize_t	bytes_read;
	char	c;

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0 && c != '\n')
	{
		write(1, &c, bytes_read);
		bytes_read = read(fd, &c, 1);
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
