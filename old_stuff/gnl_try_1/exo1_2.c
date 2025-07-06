/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo1_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:40:31 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/05 15:11:26 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*ft_strcpy_until(const char *s)
{
	char	*dest;
	ssize_t	pos;

	pos = ft_find_nl(s);
	if (pos < 0)
	{
		dest = ft_strndup(s, ft_strlen(s));
		return (dest);
	}
	dest = ft_strndup(s, pos);
	return (dest);
}

char	*ft_strcpy_after(const char *s)
{
	char	*dest;
	ssize_t	pos;

	pos = ft_find_nl(s);
	if (pos <= 0)
	{
		dest = ft_strndup("", 0);
		return (dest);
	}
	dest = ft_strndup(s + pos + 1, ft_strlen(s + pos + 1));
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strbase;
	char	*struntil;
	char	*strafter;

	strbase = ft_strndup("Test de ft_strcpy_until nl\nAfter nl.", 37);
	printf("%s\n", strbase);
	struntil = ft_strcpy_until(strbase);
	strafter = ft_strcpy_after(strbase);
	printf("%s\n", struntil);
	printf("%s\n", strafter);
	free(strbase);
	free(struntil);
	free(strafter);
	return (0);
}
*/
