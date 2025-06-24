/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_string_dynamic.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:33:20 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/23 12:37:48 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*get_message(char *str)
{
	char	*retrn;
	char	*tmp;
	size_t	alloc;

	alloc = ft_strlen(str);
	retrn = malloc((sizeof(char) * alloc) + 1);
	if (!retrn)
		return (NULL);
	tmp = retrn;
	while (*str)
	{
		*tmp = *str;
		str++;
		tmp++;
	}
	*tmp = '\0';
	return (retrn);
}

char	*concat(char *str1, char *str2)
{
	char	*retrn;
	char	*tmp;
	size_t	alloc;

	alloc = ft_strlen(str1) + ft_strlen(str2);
	retrn = malloc((sizeof(char) * alloc) + 1);
	if (!retrn)
		return (NULL);
	tmp = retrn;
	while (*str1)
	{
		*tmp = *str1;
		str1++;
		tmp++;
	}
	while (*str2)
	{
		*tmp = *str2;
		str2++;
		tmp++;
	}
	*tmp = '\0';
	return (retrn);
}

int	main(void)
{
	char	*dest;
	char	*destconcat;

	dest = get_message("Hello");
	printf("%s\n", dest);
	destconcat = concat("Hello", " Mr 42");
	printf("%s\n", destconcat);
	free(dest);
	free(destconcat);
	return (0);
}
