/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:46:56 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/27 17:17:45 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strjoin_n(const char *str1, const char *str2, size_t n);
void	ft_copy_bytes(char *dest, const char *src, size_t n);
void	ft_strcat(char *dest, const char *src);

#endif
