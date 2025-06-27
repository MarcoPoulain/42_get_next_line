/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:18:06 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/24 13:56:25 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "string_format.h"

int	main(void)
{
	char	*test= "Hello\nhow\nare you?";
	char	*call1 = ft_dup_to_newline(test);
	char	*call2 = ft_save_after_newline(test);
	char	*call3 = ft_dup_to_newline(call2);
	char	*call4 = ft_save_after_newline(call2);
	printf("%s", call1);
	printf("%s", call3);
	printf("%s", call4);
	free(call1);
	free(call2);
	free(call3);
	free(call4);
	return (0);
}
