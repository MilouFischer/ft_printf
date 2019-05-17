/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:34:36 by efischer          #+#    #+#             */
/*   Updated: 2019/04/18 17:31:44 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 32
# define FILEL ((t_file *)(list->content))
# define T_FILEL ((t_file *)(tmp->content))
# define PM1 "5"
# define PM2 "25"
# define PM3 "125"
# define PM4 "0625"
# define PM5 "03125"
# define PM6 "015625"
# define PM7 "0078125"
# define PM8 "00390625"
# define PM9 "001953125"
# define PM10 "0009765625"
# define PM11 "00048828125"
# define PM12 "00024414062"
# define PM13 "00012207031"
# define PM14 "00006103515"
# define PM15 "00003051757"
# define PM16 "00001525878"
# define PM17 "00000762939"
# define PM18 "00000381469"
# define PM19 "00000190734"
# define PM20 "00000095367"
# define PM21 "00000047683"
# define PM22 "00000023841"
# define PM23 "00000011920"

typedef struct		s_list
{
	char			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_file
{
	char			*rest;
	char			*cur;
	int				fd;
}					t_file;

int					ft_atoi(const char	*str);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
void				ft_bzero(void	*s, size_t	n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(long long n);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strtrim(char const *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				**ft_strsplit(char const *s, char c);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_factorial(int nb);
int					ft_power(int nbr, int pow);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_str_is_alpha(const char *str);
int					ft_str_is_lowercase(const char *str);
int					ft_str_is_numeric(const char *str);
int					ft_str_is_printable(const char *str);
int					ft_str_is_uppercase(const char *str);
char				*ft_strlowcase(char *str);
char				*ft_strupcase(char *str);
char				*ft_strndup(const char *s1, size_t n);
int					ft_strcasecmp(const char *s1, const char *s2);
int					ft_strncasecmp(const char *s1, const char *s2, size_t n);
char				*ft_strcasestr(const char *haystack, const char *needle);
char				*ft_strcapitalize(char *str);
int					get_next_line(const int fd, char **line);
void				ft_print_matrix(int	**mx, unsigned int x, unsigned int y);
char				*ft_itoa_base(long long int nb, long long int base);
size_t				ft_intlen(long long nb, int base);
char				*ft_itoa_base_u(unsigned long long nb, int base);
char				*ft_join_free(char *s1, char *s2, int op);
t_list				*ft_lstnew_str(char const *content, size_t content_size);
int					ft_lstprint(t_list *list);
void				ft_lstfree(t_list *list);
char				*ft_printfloat(double f);
size_t				ft_intlen_u(unsigned long long nb, int base);
char				*ft_putunicode(wchar_t *ws);
int					ft_check_unicode(char *s, unsigned int c);
unsigned int		ft_convert_to_unicode(unsigned int c);
long long			ft_atoi_base(char *str, int base);
void				*ft_memjoin(void *s1, void *s2, size_t len1, size_t len2);
char				*ft_strndup_free(char *s1, size_t n);

#endif
