/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:54:09 by jovicto2          #+#    #+#             */
/*   Updated: 2024/09/19 16:39:12 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//Libft
int					ft_atoi(const char *nptr);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_dprintf(int fd, const char *str, ...);
int					ft_putchar(char c);
int					ft_putnbr_hex(unsigned long int nbr, int index, char *base);
int					ft_putnbr_base(unsigned long int nbr, char *base);
int					ft_putstr(char *str);
int					ft_putchr_fd(char c, int fd);
int					ft_ptstr_fd(char *s, int fd);
int					ft_putnbr(int nb);
int					ft_put_unsigned(long int nb);
int					ft_put_hex(unsigned long int nbr, const char *str, int i);
int					ft_putnbr_recursive(int nb, int *length);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

//Get Next Line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif //BUFFER_SIZE

# ifndef FD_MAX
#  define FD_MAX 1024
# endif //FD_MAX

char				*ft_get_next_line(int fd);

//Prinft
# ifndef NULL_STRING
#  define NULL_STRING "(null)"
# endif //NULL_STRING

# ifndef NULL_POINTER
#  define NULL_POINTER "(nil)"
# endif //NULL_POINTER

# ifndef PRINTF_ERROR
#  define PRINTF_ERROR -1
# endif //PRINTF_ERROR

# ifndef STDOUT_FD
#  define STDOUT_FD 1
# endif //STDOUT_FD

# ifndef NOT_SPEC
#  define NOT_SPEC -1
# endif //NOT_SPEC

# ifndef FLAGS
#  define FLAGS "-+ 0#"
# endif //FLAGS

# ifndef UPPER_HEXAS
#  define UPPER_HEXAS "0123456789ABCDEF"
# endif //UPPER_HEXAS

# ifndef LOWER_HEXAS
#  define LOWER_HEXAS "0123456789abcdef"
# endif //LOWER_HEXAS

# ifndef DECIMALS
#  define DECIMALS "0123456789"
# endif //DECIMALS

# ifndef OCTALS
#  define OCTALS "01234567"
# endif //OCTALS

# ifndef BINARIES
#  define BINARIES "01"
# endif //BINARIES

typedef struct s_flags
{
	bool	has_minus;
	bool	has_plus;
	bool	has_space;
	bool	has_zero;
	bool	has_hashtag;
}			t_flags;

typedef struct s_parameters
{
	t_flags	*flags;
	ssize_t	*width;
	ssize_t	*precision;
	char	*converted;
	char	specifier;
}			t_parameters;

size_t				ft_lputaddress_fd(size_t nbr, int fd);
size_t				ft_lputbin_fd(size_t nbr, int fd);
size_t				ft_lputdouble_fd(double nbr, int fd);
size_t				ft_lputhexa_fd(size_t nbr, int fd, char specifier);
size_t				ft_lputnbr_fd(long nbr, int fd);
size_t				ft_lputoctal_fd(size_t nbr, int fd);
size_t				ft_lputstr_fd(char *s, int fd);
char				*ft_itoa_base(long long nbr, size_t base_len,
						const char *base);
char				*ft_itoa_hex(unsigned long long nbr, size_t base_len,
						const char *base);
char				*ft_ptoa(size_t nbr);
char				*ft_ctoa(char c);
char				*ft_check_string(char *string);
int					ft_printf(const char *format, ...);
char				*ft_apply_specifier(char specifier, va_list ap);
char				*ft_apply_params(t_parameters *params, char *format,
						va_list ap);
char				*ft_check_flags(char *format, t_flags *flags);
char				*ft_check_mods(char *format, ssize_t *width,
						ssize_t *precision);
void				ft_init_params(t_parameters *params);
void				ft_free_params(t_parameters *params);
size_t				ft_write_params(t_parameters *params);
ssize_t				ft_apply_width(t_parameters *params, ssize_t *conv_len,
						long *index, size_t *pb);
void				ft_apply_precision(t_parameters *params, ssize_t *conv_len,
						long *index, size_t *pb);
void				ft_apply_conversion(t_parameters *params, ssize_t *conv_len,
						size_t *pb);
void				ft_apply_zero_flag(t_parameters *params, ssize_t *conv_len,
						long *index, size_t *pb);
void				ft_apply_prefixes(t_parameters *params, size_t *pb);

//Fdf
void				ft_arr_for_each(void **array, void (*array_f)(void *),
						void (*index_f)(void *));
size_t				ft_arr_len(char **array);
char				***ft_arr_split(char **array, char delimiter);
void				ft_for_each(void **array, void (*f)(void *));
void				ft_handle_error(const char *message);
int					ft_ternary(int condition, int a, int b);

//Minitalk
# ifndef ANSI_COLOR_RED
#  define ANSI_COLOR_RED "\x1b[31m"
# endif //ANSI_COLOR_RED

# ifndef ANSI_COLOR_BLUE
#  define ANSI_COLOR_BLUE "\x1b[34m"
# endif //ANSI_COLOR_BLUE

# ifndef ANSI_COLOR_GREEN
#  define ANSI_COLOR_GREEN "\x1b[32m"
# endif //ANSI_COLOR_GREEN

# ifndef ANSI_COLOR_YELLOW
#  define ANSI_COLOR_YELLOW "\x1b[33m"
# endif //ANSI_COLOR_YELLOW

# ifndef ANSI_COLOR_MAGENTA
#  define ANSI_COLOR_MAGENTA "\x1b[35m"
# endif //ANSI_COLOR_MAGENTA

# ifndef ANSI_COLOR_CYAN
#  define ANSI_COLOR_CYAN "\x1b[36m"
# endif //ANSI_COLOR_CYAN

# ifndef ANSI_COLOR_RESET
#  define ANSI_COLOR_RESET "\x1b[0m"
# endif //ANSI_COLOR_RESET

void				ft_putstr_color_fd(char *color, char *s, int fd);

//Push Swap
long				ft_atol(const char *nptr);
int					ft_operate(int nbr1, int nbr2, char operate);
void				ft_sort_int_arr(int *arr, size_t size);
void				ft_swap(int *nbr1, int *nbr2);

# ifndef MIN
#  define MIN 0b0
# endif //MIN

# ifndef MAX
#  define MAX 0b1
# endif //MAX

//Minishell
typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

void				ft_dlstadd_b(t_dlist **lst, t_dlist *new);
void				ft_dlstadd_f(t_dlist **lst, t_dlist *new);
void				ft_dlstclear(t_dlist **lst, void (*del)(void *),
						void (*d_c)(void *));
void				ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void				ft_dlstiter(t_dlist *lst, void (*f)(void *));
t_dlist				*ft_dlstlast(t_dlist *lst);
t_dlist				*ft_dlstnew(void *content);
char				*ft_strdjoin(char *first, char *second, char *delimiter);
char				*ft_strfjoin(char *first, char *second);

#endif
