/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_substring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:04:18 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/23 13:41:51 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*substring(char *src, size_t start, size_t len)
{
	char	*retrn;
	char	*tmpretrn;
	char	*tmpsrc;
	size_t	i;

	if (start > ft_strlen(src))
		return (NULL);
	retrn = malloc((sizeof(char) * len) + 1);
	if (!retrn)
		return (NULL);
	tmpretrn = retrn;
	tmpsrc = src;
	tmpsrc += start;
	i = 0;
	while (*tmpsrc && i < len)
	{
		*tmpretrn = *tmpsrc;
		tmpretrn++;
		tmpsrc++;
		i++;
	}
	*tmpretrn = '\0';
	return (retrn);
}

int	main(void)
{
	char	*src = "Hi, Mr 42 !";
	char	*test1;
	char	*test2;
	char	*test3;

	test1 = substring(src, 4, 50);
	test2 = substring(src, 4, 500);
	test3 = substring(src, 40, 50);
	printf("%s\n", test1);
	free(test1);
	printf("%s\n", test2);
	free(test2);
	if (test3)
	{
		printf("%s\n", test3);
		free(test3);
	}
	else
		printf("le test3 est NULL\n");
	return (0);
}
