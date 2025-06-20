/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_failed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:38:59 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 13:55:53 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buffer[5];

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	if (read(fd, buffer, 5) < 0)
	{
		perror("read failed");
		return (1);
	}
	return (0);
}
