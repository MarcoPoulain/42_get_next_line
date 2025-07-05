/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:26:06 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 16:07:30 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup_n(char *str, size_t n)
{
	size_t	i;
	size_t	alloc;
	char	*dest;

	if (!str || n == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	alloc = n;
	dest = malloc((sizeof(char) * alloc) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

ssize_t	ft_find_nline(const char *str)
{
	ssize_t	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_remaining(char *str, int nline_pos)
{
	size_t	i;
	size_t	alloc;
	char	*remaining;

	if (!str)
		return (ft_strdup_n("", 0));
	if ((size_t)(nline_pos + 1) >= ft_strlen(str))
		return (ft_strdup_n("", 0));
	alloc = ft_strlen(str) - (nline_pos + 1);
	remaining = malloc((sizeof(char) * alloc) + 1);
	if (!remaining)
		return (NULL);
	i = 0;
	while (str[nline_pos + 1 + i])
	{
		remaining[i] = str[nline_pos + 1 + i];
		i++;
	}
	remaining[i] = '\0';
	return (remaining);
}
