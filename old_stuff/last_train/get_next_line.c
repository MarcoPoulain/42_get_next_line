/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:39:14 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 16:12:07 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*tmp;
	char		*line;
	char		*buffer;
	ssize_t		nline_pos;
	ssize_t		bytes_loot;

	while (1)
	{
		if (stash)
		{
			nline_pos = ft_find_nline(stash);
			if (nline_pos >= 0)
			{
				line = ft_strdup_n(stash, nline_pos + 1);
				tmp = ft_remaining(stash, nline_pos);
				free(stash);
				stash = ft_strdup_n(tmp, ft_strlen(tmp));
				free(tmp);
				return (line);
			}
			if (nline_pos < 0)
			{
				buffer = malloc(sizeof(char)*BUFFER_SIZE);
				if (!buffer)
					return (NULL);
				bytes_loot = read(fd, buffer, BUFFER_SIZE);
				if (bytes_loot == 0)
				{
					tmp = ft_strdup_n(stash, ft_strlen(stash));
					free(buffer);
					free(stash);
					stash = NULL;
					return (tmp);
				}
				tmp = ft_strdup_n(stash, ft_strlen(stash));
				free(stash);
				stash = ft_concat_n(tmp, buffer, ft_strlen(tmp), bytes_loot);
				free(buffer);
				free(tmp);				
			}
		}
		else
		{
			buffer = malloc(sizeof(char)*BUFFER_SIZE);
			if (!buffer)
				return (NULL);
			bytes_loot = read(fd, buffer, BUFFER_SIZE);
			if (bytes_loot == 0)
			{
				free(buffer);
				return (NULL);
			}
			stash = ft_strdup_n(buffer, bytes_loot);
			free(buffer);
		}
	}
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("openme", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	if (close(fd) < 0)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
*/
