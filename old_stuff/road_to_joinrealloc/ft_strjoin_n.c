/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:10:04 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 15:14:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_strjoin_n(const char *str1, const char *str2, size_t n1, size_t n2)
{
	char	*joined;
	size_t	i;
	size_t	alloc;
	size_t	start;

	alloc = n1 + n2;
	joined = malloc(sizeof(char) * alloc);
	if (!joined)
		return (NULL);
	start = n1;
	ft_copy_bytes(joined, str1, start);
	i = 0;
	while (i < n2)
	{
		joined[start + i] = str2[i];
		i++;
	}
	return (joined);
}
