/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:49:46 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/28 20:16:37 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* **************************************************************************************** */
/*										Libc Functions										*/
/* **************************************************************************************** */
void				ft_bzero(void *b, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memset(void *b, int c, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *str, const char *to_find, size_t len);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isalpha(int c);
int					ft_atoi(const char *str);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
/* **************************************************************************************** */
/*									Useful Functions										*/
/* **************************************************************************************** */
void				ft_putnbr_fd(int nb, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *str, int fd);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				**ft_split(char const *s, char c);
/* **************************************************************************************** */
/*									List Functions											*/
/* **************************************************************************************** */
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *));
/* **************************************************************************************** */
/*									Extra Functions											*/
/* **************************************************************************************** */
void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_memdel(void **ap);
void				ft_putstr(char *str);
void				ft_putendl(char *str);
void				*ft_memalloc(size_t size);
char				*ft_strnew(size_t size);
char				*ft_strupcase(char *str);
char				*ft_strlowcase(char *str);
char				*ft_strndup(const char *s, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strstr(const char *str, const char *to_find);
int					ft_isblank(int c);
int					ft_isgraph(int c);
int					ft_iscntrl(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isspace(int c);
int					ft_isxdigit(int c);
int					ft_str_is_alpha(char *str);
int					ft_str_is_numeric(char *str);
int					ft_strcmp(char *s1, char *s2);
int					ft_str_is_lowercase(char *str);
int					ft_str_is_printable(char *str);
int					ft_str_is_uppercase(char *str);
int					ft_strnlen(char *str, size_t size);

#endif
