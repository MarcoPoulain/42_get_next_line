/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:21:57 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 17:01:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;
	size_t 	alloc;
	char	*joined;

	alloc = ft_strlen(str1) + ft_strlen(str2);
	joined = malloc((sizeof(char) * alloc) + 1);
	if (!joined)
		return (NULL);
	ft_copy_bytes(joined, str1, ft_strlen(str1));
	joined[ft_strlen(str1)] = '\0';
	ft_strcat(joined, str2);
	return (joined);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str1 = "Hello ";
	char	*str2 = "world.";
	char	*joined;

	joined = ft_strjoin(str1, str2);
	printf("%s\n", joined);
	free(joined);
	return (0);
}
*/
