/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:00:10 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/15 21:37:44 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h>

# define ERROR_PARSE_LONG (long)-9223372036854775806
# define VALID_PARSE_LONG (long)9223372036854775806
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define TRUE 1
# define FALSE 0
# define NULL_VALUE -2147483649

typedef long	(*t_func_tab)(long, long);

typedef struct		s_arithm
{
	long			first_operand;
	long			second_operand;
	char			operator;
	t_func_tab		func_tab[127];
	int				value;
}					t_arithm;

typedef struct		s_list
{
	char			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
	const char *needle, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(char *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lst_push_back(t_list **begin_lst, char *content,
	size_t content_size);
void				ft_print_lst(t_list *lst);
char				*ft_strjoinf(char *s1, char *s2, int flag);
int					ft_higher_value(int a, int b, int c);
int					ft_nb_digit(int base, char *c, ...);
t_list				*ft_lst_last(t_list *head);
void				ft_free_array(char **array);
char				**ft_fill_array(size_t len, ...);
void				ft_print_array(char **array, int len);
int					ft_lst_len(t_list *head);
int					ft_atoi_move(char **s_ref);
long				ft_atol_move(char **s_ref);
long				ft_is_operator(char c);
long				ft_is_number(char c);
long				ft_is_whitespace(char c);
void				ft_skip_whitespace(char **s);
long				ft_addition_func(long n_1, long n_2);
long				ft_substract_func(long n_1, long n_2);
long				ft_multiplication_func(long n_1, long n_2);
long				ft_division_func(long n_1, long n_2);
long				ft_modulo_func(long n_1, long n_2);
long				ft_eval_expr(char *s);
char				**ft_split_whitespace(char *str);
void				ft_print_array(char **array, int len);
void				ft_array_add_element(char **array, char *str);
void				ft_array_init(char **array, int len);
void				ft_add_array(char **array, char **to_add, int len);
char				**ft_array_alloc(int len);
int					ft_array_len(char **array);
long				ft_array_elem_cmp(char *str, char **array);
void				ft_del_array(char **array);
void				ft_n_tab_del(long *n_tab, size_t len);
char				**ft_list_to_array(t_list *list);
char				*ft_strcdup(char *str, int c);
size_t				ft_strclen(char *str, char c);
void				ft_print_tab(long *tab, size_t len);
long				*ft_tabdup(long *tab, int len);
int					ft_digit(long nb);
void				ft_print_char(char c, int len);
char				*ft_strpdupf(char *src, char c, char **rest);
void				ft_lst_free(t_list **head);
#endif
