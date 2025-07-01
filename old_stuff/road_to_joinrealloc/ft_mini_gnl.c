/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_gnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:51:54 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 17:50:33 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "header.h"

char	*ft_mini_gnl(int fd)
{
	static char *stash;
	char		*cleanline;
	char		buffer[7];
	ssize_t		nline_pos;
	ssize_t		bytes_loot;
	size_t		i;
	
	if (stash)


