/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:09:59 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/27 01:02:46 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_base(unsigned long long nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb < 16)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
	{
		count += put_base(nb / 16);
		count += put_base(nb % 16);
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int					count;
	unsigned long long	nb;

	nb = (unsigned long long)ptr;
	count = 0;
	count += put_base(nb);
	return (count);
}
