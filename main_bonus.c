/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:02:03 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/06 14:04:08 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line_bonus.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("openme", O_RDONLY);
	if (fd1 < 0)
	{
		perror("open failed");
		return (1);
	}
	fd2 = open("openme2", O_RDONLY);
	if (fd2 < 0)
	{
		perror("open failed");
		return (1);
	}
	while ((line1 = get_next_line(fd1)) && (line2 = get_next_line(fd2)))
	{
		if (line1)
		{
			printf("FD1: %s", line1);
			free(line1);
		}
		if (line2)
		{
			printf("FD2: %s", line2);
			free(line2);
		}
	}
	close(fd1);
	close(fd2);
	return (0);
}
