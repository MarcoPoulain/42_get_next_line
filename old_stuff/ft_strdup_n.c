/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:45:05 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 11:19:44 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

char	*ft_strdup_n(char *str, size_t n)
{
	size_t	i;
	size_t	alloc;
	char	*dest;

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
/*
#include <stdio.h>
int	main(void)
{
	char	*dupme = "Duplicate me please";
	char	*dest;

	dest = ft_strdup_n(dupme, ft_strlen(dupme));
	printf("%s\n", dest);
	return (0);
}
*/
