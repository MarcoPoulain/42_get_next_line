/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:00:13 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/23 16:19:27 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	main(void)
{
	char	*test;

	test = ft_strchr("Yoh\nOu pas yoh?", '\n');
	printf("%s\n", test);
	test = ft_strchr("Yoh ou pas yoh?", '\n');
	printf("%s\n", test);
	return (0);
}
