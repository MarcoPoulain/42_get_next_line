/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:46:05 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/01 16:47:00 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_concat_n(char *str1, char *str2, size_t n1, size_t n2)
{
	size_t	alloc;
	size_t	i;
	char	*joined;

	alloc = n1 + n2;
	joined = malloc((sizeof(char) * alloc) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < n1)
	{
		joined[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < n2)
	{
		joined[n1 + i] = str2[i];
		i++;
	}
	joined [n1 + i] = '\0';
	return (joined);
}
