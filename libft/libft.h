/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:26:19 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/08 09:36:17 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

char		**ft_split(char const *s, char c);

char		*ft_strtrim(char const *s1, char const *set);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strnstr(const char *big, const char *little, size_t len);

char		*ft_strrchr(const char *s, int c);

char		*ft_itoa(int n);

char		*ft_strdup(const char *s);

char		*ft_strchr(const char *s, int c);

char		*ft_strjoin(char const *s1, char const *s2);

void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		*ft_memchr(const void *s, int c, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		ft_putstr_fd(char *s, int fd);

void		ft_bzero(void *s, size_t n);

void		*ft_calloc(size_t nmemb, size_t size);

void		*ft_memmove(void *dest, const void *src, size_t n);

void		*ft_memset(void *s, int c, size_t n);

void		ft_putchar_fd(char c, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int n, int fd);

size_t		ft_strlen(const char *s);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int			ft_isalpha(int c);

int			ft_isascii(int c);

int			ft_isdigit(int c);

int			ft_isprint(int c);

int			ft_isalnum(int c);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_strncmp(const char *s1, const char *s2, size_t n);

int			ft_tolower(int c);

int			ft_toupper(int c);

long int	ft_atoi(const char *nptr);
#endif
