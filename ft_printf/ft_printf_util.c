/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehwkim <jaehwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:24:21 by jaehwkim          #+#    #+#             */
/*   Updated: 2022/02/07 14:18:07 by jaehwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *result)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', result);
		ft_putchar('2', result);
		ft_putnbr(147483648, result);
	}
	else if (nb < 0)
	{
		ft_putchar('-', result);
		ft_putnbr(-nb, result);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, result);
		ft_putnbr(nb % 10, result);
	}
	else
		ft_putchar(nb + '0', result);
}

void	ft_putnbr_unsigned(unsigned int nb, int *result)
{
	if (nb < 0)
	{
		ft_putnbr(-nb, result);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, result);
		ft_putnbr(nb % 10, result);
	}
	else
		ft_putchar(nb + '0', result);
}

int	base_criteria(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '+' || base[i] == '-')
		return (1);
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

void	ft_base(unsigned long long n, char *base, int *result)
{
	unsigned long long	len;

	len = base_criteria(base);
	if (n >= len)
	{
		ft_base(n / len, base, result);
		ft_base(n % len, base, result);
	}
	if (n < len)
	{
		write(1, &base[n], 1);
		*result += 1;
	}
}

void	ft_putnbr_base(unsigned long long nbr, char *base, int *result)
{
	unsigned long long	n;

	n = nbr;
	if (base_criteria(base) == 1)
		return ;
	else
		ft_base(n, base, result);
}
