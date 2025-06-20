/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:51:55 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 16:07:57 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	increment(void)
{
	static int	i;

	i = i + 1;
	return (i);
}

int	main(void)
{
	increment();
	increment();
	increment();
	printf("i = %d\n", increment());
	return (0);
}
