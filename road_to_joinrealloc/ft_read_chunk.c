/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:13:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 12:32:36 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "header.h"

ssize_t	ft_read_chunk(int fd, char *buffer, size_t bufsize)
{
	ssize_t	bytes_loot;

	bytes_loot = read(fd, buffer, bufsize);
	return (bytes_loot);
}
