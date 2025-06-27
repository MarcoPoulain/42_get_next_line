/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_accumulate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:44:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/23 18:15:05 by kassassi         ###   ########.fr       */
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

char	*ft_concat(char *str1, char *str2)
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

char	*ft_firstconcat(char *str)
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

char	*ft_accumulate(char *str)
{
	static char	*memo;
	char		*memotmp;

	if (!memo)
		memo = ft_firstconcat(str);
	else
	{
		memotmp = ft_concat(memo, str);
		free (memo);
		memo = memotmp;
	}
	return (memo);
}

int	main(void)
{
	char	*call1 = ft_accumulate("Yoh");
	char	*call2 = ft_accumulate(" Mr 42");
	char	*call3 = ft_accumulate(" !\n");

	printf("%s", call3);
	free(call3);

	return (0);
}
