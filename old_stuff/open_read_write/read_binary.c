/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_binary.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:56:12 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 14:34:36 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buffer[16];
	ssize_t	bytes_read;
	int		i;

	fd = open("prog", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	while ((bytes_read = read(fd, buffer, 16)) > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			printf("0x%02x ", (unsigned char)buffer[i]);
			i++;
		}
		printf("\n");
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
