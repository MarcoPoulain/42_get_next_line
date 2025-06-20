/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_nofile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:03:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/18 15:09:28 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("nofile.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Open failed");
		return (1);
	}
	return (0);
}
