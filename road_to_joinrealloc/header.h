/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:46:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/29 15:12:14 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>

size_t	ft_strlen(const char *str);
ssize_t	ft_read_chunk(int fd, char *buffer, size_t bufsize);
ssize_t	ft_find_newline(const char *buffer, size_t size);
char	*ft_strdup(const char *src);
char	*ft_strdup_n(const char *src, size_t n);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strjoin_n(const char *str1, const char *str2, size_t n1, size_t n2);
char	*ft_extract_line(const char *buffer, size_t newline_pos);
char	*ft_keep_remaining(const char *buf, size_t totl_size, size_t nline_pos);
char	*ft_mini_gnl(int fd);
void	ft_copy_bytes(char *dest, const char *src, size_t n);
void	ft_strcat(char *dest, const char *src);
void	ft_write_chunk(const char *buffer, size_t size);

#endif
