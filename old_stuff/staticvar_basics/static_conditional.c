/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_conditional.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:10:02 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 16:15:56 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	modifier(int n)
{
	static int	totl;

	if (n % 2 == 0)
	{
		totl = totl + 2;
	}
	else
	{
		totl = totl + 3;
	}
	return (totl);
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		printf("totl = %d\n", modifier(i));
		i++;
	}
	return (0);
}
