/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_creatfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:25:05 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/18 15:09:47 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}
	printf ("File ready to be written\n");
	if (close(fd) == -1)
	{
		perror("close failed");
		return (1);
	}
	return (0);
}
