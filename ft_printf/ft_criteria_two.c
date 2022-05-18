/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_criteria_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehwkim <jaehwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:24:05 by jaehwkim          #+#    #+#             */
/*   Updated: 2022/02/07 14:22:13 by jaehwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_x(va_list ap, int *result)
{
	unsigned int	x;

	x = va_arg(ap, unsigned int);
	ft_putnbr_base(x, "0123456789abcdef", result);
}

void	print_X(va_list ap, int *result)
{
	unsigned int	X;

	X = va_arg(ap, unsigned int);
	ft_putnbr_base(X, "0123456789ABCDEF", result);
}
