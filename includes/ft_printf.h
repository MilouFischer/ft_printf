/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:27:09 by efischer          #+#    #+#             */
/*   Updated: 2019/04/18 15:49:28 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct	s_out
{
	void		*str;
	int			len;
}				t_out;

typedef struct	s_tmp
{
	char		*str;
	size_t		len;
}				t_tmp;

typedef struct	s_flag
{
	int			width;
	int			precision;
	int			sharp;
	int			zero;
	int			min;
	int			space;
	int			plus;
	int			dot;
	int			h;
	int			hh;
	int			l;
	int			ll;
	int			j;
	int			z;
	int			null;
	int			exit;
}				t_flag;

int				ft_printf(const char *format, ...);
t_list			*ft_lstnew_str(char const *content, size_t content_size);
char			*ft_process_flag(char **s, va_list *arg, t_flag *flag);
void			ft_init_flag(t_flag *flag);
void			ft_manage_flag(char c, t_flag *flag);
void			ft_manage_conv_flag(char c, t_flag *flag);
char			*ft_manage_str(char c, va_list *arg, t_flag *flag);
char			*ft_manage_c(va_list *arg, t_flag *flag);
char			*ft_manage_s(va_list *arg, t_flag *flag);
char			*ft_manage_p(va_list *arg, t_flag *flag);
char			*ft_diouxxf(char c, va_list *arg, t_flag *flag);
char			*ft_long_diouxx(char c, va_list *arg, t_flag *flag);
char			*ft_diouxx(char c, va_list *arg, t_flag *flag);
char			*ft_precision(char conv, char *format, t_flag *flag);
char			*ft_width(char conv, char *format, t_flag *flag);
int				ft_strlen_null(char *s, int nb);
int				ft_putstr_null(char	*s, int nb);
char			*ft_manage_unicode_str(va_list *arg, t_flag *flag);
char			*ft_manage_unicode_char(va_list *arg, t_flag *flag);
char			*ft_apply_flag(char c, char	*format, t_flag *flag);
void			ft_precision_width(va_list *arg, t_flag *flag, char **s);
char			*ft_round(char *s, int n);

#endif
