/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exctract_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 13:52:22 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 14:19:51 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_extract_line(const char *buffer, size_t newline_pos)
{
	char	*new_buffer;

	new_buffer = malloc((sizeof(char) * newline_pos) + 1);
	if (!new_buffer)
		return (NULL);
	ft_copy_bytes(new_buffer, buffer, newline_pos + 1);
	return (new_buffer);
}
/*
#include <unistd.h>
int	main(void)
{
	char	*test = "Line extraction\nSuccess?\n";
	char	*line_extract;

	line_extract = ft_extract_line(test, 15);
	write(1, line_extract, 16);
	return (0);
}
*/
