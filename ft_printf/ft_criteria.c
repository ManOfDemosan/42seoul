/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_criteria.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehwkim <jaehwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:24:05 by jaehwkim          #+#    #+#             */
/*   Updated: 2022/02/07 14:18:06 by jaehwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(va_list ap, int *result)
{
	char	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	*result += 1;
}

void	print_s(va_list ap, int *result)
{
	char	*s;

	s = va_arg(ap, char *);
	ft_putstr(s, result);
}

void	print_p(va_list ap, int *result)
{
	unsigned long long	p;
	char				*zerox;

	p = va_arg(ap, long long);
	zerox = "0x";
	ft_putstr(zerox, result);
	ft_putnbr_base(p, "0123456789abcdef", result);
}

void	print_d(va_list ap, int *result)
{
	int	d;

	d = va_arg(ap, int);
	ft_putnbr(d, result);
}

void	print_u(va_list ap, int *result)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putnbr_unsigned(u, result);
}
