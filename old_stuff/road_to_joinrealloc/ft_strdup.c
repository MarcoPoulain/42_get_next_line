/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:40:41 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 15:20:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	alloc;
	size_t	i;

	alloc = ft_strlen(src);
	dest = malloc((sizeof(char) * alloc) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < alloc)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char 	*test = "Duplicate me";
	char	*duptest;

	duptest = ft_strdup(test);
	printf("%s\n", duptest);
	free(duptest);
	return (0);
}
*/
