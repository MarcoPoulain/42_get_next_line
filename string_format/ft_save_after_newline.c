/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_after_newline.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:17:13 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/24 13:30:59 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "string_format.h"

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

char	*ft_strchr(char *str, char c)
{
	char	*find_c;
	
	find_c = str;
	while(*find_c)
	{
		if (*find_c == c)
			return (find_c);
		find_c++;
	}
	if (*find_c == c)
		return (find_c);
	return (NULL);
}

char	*ft_save_after_newline(char *src)
{
	char	*afterline;
	char	*dest;
	size_t	len;
	size_t	i;

	afterline = ft_strchr(src, '\n');
	if (!afterline || !*(afterline + 1))
		return (NULL);
	afterline++;
	len = ft_strlen(afterline);
	dest = malloc((sizeof(char) * len) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (afterline[i])
	{
		dest[i] = afterline[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*call1;
	char	*call2;
	char	*call3;

	call1 = ft_save_after_newline("Yoh\nJe suis apres une newline");
	call2 = ft_save_after_newline("Yoh. Je suis apres un point");
	call3 = ft_save_after_newline("\n");
	printf("%s\n", call1);
	free(call1);
	printf("%s\n", call2);
	free(call2);
	printf("%s\n", call3);
	free(call3);
	return (0);
}*/
