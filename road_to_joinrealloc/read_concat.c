/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_concat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:54:22 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 18:00:35 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "header.h"

int	main(void)
{
	int		fd;
	size_t	total_len;
	ssize_t	bytes_read;
	char	buffer[6];
	char	*result = NULL;
	char	*bigbuff;

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 5);

	return (0);
}
