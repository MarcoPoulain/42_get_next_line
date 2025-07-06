/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo3_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:44:58 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/05 15:51:09 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char	*read_full_fd(int fd)
{
	char	*buffer;
	char	*str;
	char	*tmp;
	size_t	bytes_loot;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_loot = 1;
	str = ft_strndup("", 0);
	while (bytes_loot > 0)
	{
		bytes_loot = read(fd, buffer, BUFFER_SIZE);
		if (bytes_loot < 0)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[bytes_loot] = '\0';
		tmp = ft_strjoin(str, buffer);
		free(str);
		str = tmp;
	}
	free(buffer);
	return (str);
}

char	*read_until_nl(int fd)
{
	char	*buffer;
	char	*str;
	char	*tmp;
	size_t	bytes_loot;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_loot = 1;
	str = ft_strndup("", 0);
	while (ft_find_nl(str) == -1 && bytes_loot > 0)
	{
		bytes_loot = read(fd, buffer, BUFFER_SIZE);
		if (bytes_loot < 0)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[bytes_loot] = '\0';
		tmp = ft_strjoin(str, buffer);
		free(str);
		str = tmp;
	}
	free(buffer);
	if (str && *str == '\0')
	{
		free(str);
		return (NULL);
	}
	return (str);
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int		fd;
	char	*strfile;

	fd = open("empty", O_RDONLY);
	if (fd < 0)
	{
		perror("open failed");
		return (1);
	}
	strfile = read_until_nl(fd);
	printf("%s", strfile);
	free(strfile);
	return (0);
}
*/
