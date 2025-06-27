/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:10:04 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 17:29:17 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_strjoin_n(const char *str1, const char *str2, size_t n)
{
	char	*joined;
	size_t	i;
	size_t	alloc;
	size_t	start;

	alloc = ft_strlen(str1) + n;
	joined = malloc((sizeof(char) * alloc) + 1);
	if (!joined)
		return (NULL);
	start = ft_strlen(str1);
	ft_copy_bytes(joined, str1, start);
	i = 0;
	while (i < n)
	{
		joined[start + i] = str2[i];
		i++;
	}
	joined[start + i] = '\0';
	return (joined);
}
