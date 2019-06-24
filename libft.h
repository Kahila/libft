/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 12:17:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/24 11:00:02 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t				ft_strlen(const char *s);
int					ft_int_len(long n);
void				*ft_memcpy(void *s, const void *s1, size_t n);
void				*ft_memchr(const void *s, int i, size_t n);
void				*ft_memmove(void *s, const void *s1, size_t n);
void				*ft_memccpy(void *s, const void *s1, int i, size_t n);
char				*ft_strcpy(char *s, const char *s1);
size_t				ft_strlcat(char *s, const char *s1, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char *s);
char				*ft_strdup(const char *s);
char				*ft_strstr(const char *s, const char *s1);
char				*ft_strnstr(const char *s, const char *s1, size_t n);
int					ft_memcmp(const void *s, const void *s1, size_t n);
char				*ft_strncpy(char *s, const char *s1, size_t n);
char				*ft_strcat(char *s, const char *s1);
char				*ft_strncat(char *s, const char *s1, size_t i);
char				*ft_strchr(const char *s, int i);
char				*ft_search_n_replace(char *str, int ch1, int ch2);
int					ft_atoi(const char *str);
int					ft_find_len(const char *s, char c);
int					ft_isalpha(int i);
int					ft_isalnum(int i);
int					ft_isascii(int i);
int					ft_isdigit(int i);
int					ft_isprint(int i);
int					ft_toupper(int i);
int					ft_tolower(int i);
int					ft_count(char *s, char c);
int					ft_strcmp(const char *s, const char *s1);
int					ft_strncmp(const char *s, const char *s1, size_t n);
char				*ft_strrchr(const char *s, int i);
void				*ft_memset(void *s, int i, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *s1));
void				ft_striteri(char *s, void (*f)(unsigned int i, char *s1));
char				*ft_strmap(char const *s, char (*f)(char c));
char				*ft_strmapi(char const *s, char(*f)
		(unsigned int i, char c));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_shake_n_bake_(char const *str, unsigned char bake);
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *l, t_list *(*f)(t_list *el));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
#endif
