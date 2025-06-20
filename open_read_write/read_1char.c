/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_1char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:32:28 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/18 15:47:01 by kassassi         ###   ########.fr       */
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
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0)
	{
		write(1, &c, 1);
		bytes_read = read(fd, &c, 1);
	}
	if (close(fd) == -1)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
