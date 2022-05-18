/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehwkim <jaehwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:43:59 by jaehwkim          #+#    #+#             */
/*   Updated: 2022/02/07 21:46:36 by jaehwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *result);
void	ft_putstr(char *s, int *result);
void	ft_putnbr(int nb, int *result);
void	ft_putnbr_unsigned(unsigned int nb, int *result);
int		base_criteria(char *base);
void	ft_base(unsigned long long n, char *base, int *result);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *result);
void	ft_format_div(char *str);
void	print_c(va_list ap, int *result);
void	print_s(va_list ap, int *result);
void	print_p(va_list ap, int *result);
void	print_d(va_list ap, int *result);
void	print_u(va_list ap, int *result);
void	print_x(va_list ap, int *result);
void	print_X(va_list ap, int *result);
#endif