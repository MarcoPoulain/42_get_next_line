/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_empty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:12:41 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 13:30:45 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[10];

	fd = open("empty.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 10);
	printf("read returns: \"%zd\"\n", bytes_read);
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
