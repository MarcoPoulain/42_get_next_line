/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keep_remaining.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:20:23 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 16:03:03 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

char	*ft_keep_remaining(const char *buf, size_t totl_size, size_t nline_pos)
{
	size_t	remaining_size;
	size_t	i;
	char	*remaining;

	remaining_size = totl_size - (nline_pos + 2);
	if (remaining_size == 0)
		return (NULL);
	remaining = malloc(sizeof(char) * remaining_size);
	i = 0;
	while (i < remaining_size)
	{
		remaining[i] = buf[nline_pos + 1 + i];
		i++;
	}
	remaining[i] = '\0';
	return (remaining);
}
/*
int	main(void)
{
	char	*test = "line extraction\nThe rest?\n";
	char	*remaining;

	remaining = ft_keep_remaining(test, 26, 15);
	write(1, remaining, 26 - 16);
	return (0);
}
*/
