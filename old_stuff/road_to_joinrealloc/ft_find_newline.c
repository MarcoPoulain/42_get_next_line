/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_newline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 13:15:42 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 14:24:39 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

ssize_t	ft_find_newline(const char *buffer, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
