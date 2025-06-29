/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_chunk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:35:23 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/28 14:58:23 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "header.h"

int	main(void)
{
	int		fd;
	size_t	i;
	size_t	lenline;
	ssize_t	bytes_read;
	char	buffer[6];
	char	*reader;
	char	*bigbuff = NULL;
	char	*tmp;

	fd = open("openme.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	bytes_read = read(fd, buffer, 5);
	while (bytes_read > 0)
	{
		reader = ft_strdup_n(buffer, bytes_read);
		if (!bigbuff)
		{
			bigbuff = ft_strdup(reader);
			free(reader);
		}
		else
		{
			tmp = ft_strdup(bigbuff);
			free(bigbuff);
			bigbuff = ft_strjoin_n(tmp, reader, bytes_read); 
			free(reader);
			free(tmp);
		}

		bytes_read = read(fd, buffer, 5);
	}
	if (bytes_read < 0)
	{
		perror("read failed");
		return (1);
	}
	printf("%s\n", bigbuff);
	i = 0;
	lenline = 0;
	while (bigbuff[i])
	{
		if (bigbuff[i] == '\n')
			lenline++;
		i++;
	}
	printf("Le fichier fait %zi lines\n", lenline);
	free(bigbuff);
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
*/
