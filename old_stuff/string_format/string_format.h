/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_format.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:51:04 by kassassi          #+#    #+#             */
/*   Updated: 2025/06/24 13:46:06 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_FORMAT_H
# define STRING_FORMAT_H
# include <stdlib.h>

size_t	ft_strlen(char *str);
size_t	ft_linelen(char *str);
char	*ft_strchr(char *str, char c);
char	*ft_dup_to_newline(char *src);
char	*ft_save_after_newline(char *src);

#endif
