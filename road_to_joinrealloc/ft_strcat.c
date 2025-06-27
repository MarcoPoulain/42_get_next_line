/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:00:37 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 16:12:00 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

void	ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	start;

	start = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
}
