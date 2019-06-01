/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 12:17:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/01 17:29:42 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *); // works
void		*ft_memcpy(void *, const void *, size_t);//works
void		*ft_memchr(const void *, int, size_t);//works
void		*ft_memmove(void *, const void *, size_t);//works
void		*ft_memccpy(void *, const void *, int, size_t);//works
char		*ft_strcpy(char *, char *);//works  
size_t		ft_strlcat(char *, const char *, size_t);//works
void		ft_putchar(char);//works
void		ft_putstr(char *);// works
char		*ft_strdup(char *);//works
char		*ft_strstr(const char*, const char*);//works
char		*ft_strnstr(const char*, const char*, size_t);//works
int		ft_memcmp(const void *, const void *, size_t); // works
char		*ft_strncpy(char *, char *, int);//works
char		*ft_strcat(char *, char *);//works
char		*ft_strncat(char *, char *, int); //works 
char		*ft_strchr(const char *, int);//works
int		ft_atoi(const char *str);//works
int		ft_isalpha(int);//works
int		ft_isalnum(int);//works
int		ft_isascii(int);//works
int		ft_isdigit(int);//works
int		ft_isprint(int);//works
int		ft_toupper(int);//works
int		ft_tolower(int);//works
int		ft_strcmp(const char *, const char*);//works
int		ft_strncmp(const char*, const char*, size_t);//works
char		*ft_strrchr(const char *, int);//works
void		*ft_memset(void *, int, size_t);//works
void		ft_bzero(void *, size_t); //works
void *		ft_memalloc(size_t size); //allocates heap memory -> works
void		ft_memdel(void **ap);//works
char *		ft_strnew(size_t size);//works
void		ft_strdel(char **as);//works
void		ft_strclr(char *s); //works
void		ft_striter(char *s, void (*f)(char *));//works
void		ft_striteri(char *s, void (*f)(unsigned int, char *));//works
char *		ft_strmap(char const *s, char (*f)(char));//works
char *		ft_strmapi(char const *s, char(*f)(unsigned int, char));//works
int		ft_strequ(char const *s1, char const *s2);//research
int		ft_strnequ(char const *s1, char const *s2,size_t n);//research
char *		ft_strsub(char const *s, unsigned int start, size_t len);
char *		ft_strjoin(char const *s1, char const *s2);
char *		ft_strtrim(char const *s);
char **		ft_strsplit(char const *s, char c);
char *		ft_itoa(int n);
void		ft_putendl(char const *s);//works
void		ft_putnbr(int n);//works
void		ft_putchar_fd(char c, int fd);//works
void		ft_putstr_fd(char const *s, int fd);//works
void		ft_putendl_fd(char const *s, int fd);//works
void		ft_putnbr_fd(int n, int fd);//works

#endif
