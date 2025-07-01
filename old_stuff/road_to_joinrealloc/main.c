/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 13:01:16 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 14:25:04 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "header.h"

int	main(void)
{
	char	buffer[8];
	ssize_t	bytes_loot;
	int		fd;

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_loot = ft_read_chunk(fd, buffer, 8);
	while (bytes_loot > 0)
	{
		ft_write_chunk(buffer, bytes_loot);
		printf("%zd\n", ft_find_newline(buffer, bytes_loot));
		bytes_loot = ft_read_chunk(fd, buffer, 8);
	}
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
