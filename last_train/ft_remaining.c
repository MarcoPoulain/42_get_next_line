/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remaining.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:43:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/01 16:44:33 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header"

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
