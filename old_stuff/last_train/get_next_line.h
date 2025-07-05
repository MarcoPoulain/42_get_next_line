/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:55:47 by kassassi          #+#    #+#             */
/*   Updated: 2025/07/02 16:03:49 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10

# endif

# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_remaining(char *str, int nline_pos);
ssize_t	ft_find_nline(const char *str);
char	*ft_strdup_n(char *str, size_t n);
char	*ft_concat_n(char *str1, char *str2, size_t n1, size_t n2);
char	*get_next_line(int fd);

#endif
