/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:42:36 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 11:30:12 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

ssize_t	ft_find_nline(const char *str)
{
	ssize_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
/*
#include <stdio.h>
int	main(void)
{
	ssize_t	nline_pos;
	char	*chest = "Find my new\nline please";

	nline_pos = ft_find_nline(chest);
	printf("%zu\n", nline_pos);
	return (0);
}
*/
