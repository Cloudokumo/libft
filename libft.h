/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiehl-b <adiehl-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:23:56 by adiehl-b          #+#    #+#             */
/*   Updated: 2024/11/17 17:23:30 by adiehl-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strncmp(const char *str1, const char *str2,
						size_t length);
int					ft_atoi(const char *str);
int					ft_lstsize(t_list *lst);
int					ft_memcmp(const void *pointer1, const void *pointer2,
						size_t size);

void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_calloc(size_t n, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memmove(void *dest, const void *src, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));

double				ft_atof(const char *nptr);
size_t ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);

char				*ft_strdup(const char *source);
char				*ft_strnstr(const char *str, const char *find, size_t slen);
char				*ft_strchr(const char *str, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strrchr(const char *str, int c);
char				**ft_split(const char *str, char c);
char				*ft_itoa(int n);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);

#endif