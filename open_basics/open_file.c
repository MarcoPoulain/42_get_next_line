/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:14:35 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/18 13:58:51 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("openme.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Open failed to open the file\n");
		return (1);
	}
	printf("Successful opening file\n");
	printf("Open retourne le file descriptor: %d\n", fd);
	if (close(fd) == -1)
	{
		printf("close failed\n");
		return (1);
	}
	return (0);
}
