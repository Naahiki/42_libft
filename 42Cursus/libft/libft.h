/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:56:37 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/04 12:24:54 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>

// 1.Zatia - Funciones Standard C Library (libc, -lc)
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void 			*memmove(void *dst, const void *src, size_t len);
size_t			strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t			strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int				toupper(int c);
int				tolower(int c);
char 			*strchr(const char *s, int c);
char 			*strrchr(const char *s, int c);
int				strncmp(const char *s1, const char *s2, size_t n);
int				memcmp(const void *s1, const void *s2, size_t n);
char 			*strnstr(const char *haystack, const char *needle, size_t len);
int				ft_atoi(const char *str);

#endif