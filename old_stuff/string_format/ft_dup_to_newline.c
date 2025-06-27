/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_to_newline.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:14:57 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/24 13:31:19 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "string_format.h"

size_t	ft_linelen(char *str)
{
	size_t	i;

	i = 0;
	if (!str || *str == '\0')
		return (0);
	while (*str)
	{
		if (*str == '\n')
		{
			i++;
			break;
		}
		str++;
		i++;	
	}
	return (i);
}

char	*ft_dup_to_newline(char *src)
{
	size_t	len;
	size_t	i;
	char	*dest;
	char	*tmp;

	if (!src)
		return (NULL);
	len = ft_linelen(src);
	dest = malloc((sizeof(char)	* len) + 1);
	if (!dest)
		return (NULL);
	tmp = dest;
	i = 0;
	while (i < len)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*test1 = "test\n after newline";
	char	*test2 = "test after newline";
	char	*test3 = NULL;
	char	*call1 = ft_dup_to_newline("Zogzog\n guerriers");
	char	*call2 = ft_dup_to_newline("Zogzog guerriers");

	printf("%zu\n", ft_linelen(test1));
	printf("%zu\n", ft_linelen(test2));
	printf("%zu\n", ft_linelen(test3));
	printf("%s\n", call1);
	free(call1);
	printf("%s\n", call2);
	free(call2);
	return (0);
}*/
