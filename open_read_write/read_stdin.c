/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:47:00 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 14:51:35 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	ssize_t	bytes_read;
	char	buffer[10];

	bytes_read = read(0, buffer, 10);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(0, buffer, 10);
	}
	return (0);
}
