/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:28:34 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/20 16:34:09 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*nbr;

	nbr = malloc(sizeof(int) * 1);
	*nbr = 42;
	printf("nbr = %d\n", *nbr);
	free(nbr);
	return (0);
}
