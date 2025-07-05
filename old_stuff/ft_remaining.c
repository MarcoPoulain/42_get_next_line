/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remaining.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:43:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 11:35:44 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_remaining(char *str, int nline_pos)
{
	size_t	i;
	size_t	alloc;
	char	*remaining;

	alloc = ft_strlen(str) - (nline_pos + 1);
	remaining = malloc((sizeof(char) * alloc) + 1);
	i = 0;
	while (str[nline_pos + 1 + i])
	{
		remaining[i] = str[nline_pos + 1 + i];
		i++;
	}
	remaining[i] = '\0';
	return (remaining);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*chest = "Find my new\nline please";
	char	*remain;
	ssize_t	nline_pos;

	nline_pos = ft_find_nline(chest);
	remain = ft_remaining(chest, nline_pos);
	printf("%s\n", remain);
	return (0);
}
*/
