/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:21:10 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 14:14:07 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include "libft.h"

int	ft_atoi(char *nbr);
void	*ft_bzero(void *buff, size_t n);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strnstr(char *str, char *fnd, size_t n);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t s);
size_t	ft_strlcat(char *dst, char *src, size_t s);
char	*ft_strchr(char *str, int c);
void	*ft_memset(void *buff, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
int	ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
int	ft_isprint(char c);
int	ft_isdigit(char c);
int	ft_isascii(int c);
char	*ft_strdup(char *str);
void	*ft_calloc(size_t n_items, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif
