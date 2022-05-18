/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehwkim <jaehwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:03 by jaehwkim          #+#    #+#             */
/*   Updated: 2022/02/07 21:41:49 by jaehwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *result)
{
	write(1, &c, 1);
	*result += 1;
}

void	ft_putstr(char *s, int *result)
{
	if (s == 0)
	{
		write (1, "(null)", 6);
		*result += 6;
		return ;
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
		*result += 1;
	}
}

void	criteria(char *str, va_list ap, int *result)
{
	if (*str == 'c')
		print_c(ap, result);
	else if (*str == 's')
		print_s(ap, result);
	else if (*str == 'p')
		print_p(ap, result);
	else if (*str == 'd' || *str == 'i')
		print_d(ap, result);
	else if (*str == 'u')
		print_u(ap, result);
	else if (*str == 'x')
		print_x(ap, result);
	else if (*str == 'X')
		print_X(ap, result);
	else if (*str == '%')
	{
		write(1, "%", 1);
		*result += 1;
	}
	else
		ft_putchar(*str, result);
}

int	ft_format(va_list ap, char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 0)
				break ;
			criteria(str, ap, &result);
		}
		else
			ft_putchar(*str, &result);
		str++;
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int			result;
	va_list		ap;

	result = 0;
	va_start(ap, str);
	result = ft_format(ap, (char *)str);
	va_end(ap);
	return (result);
}
