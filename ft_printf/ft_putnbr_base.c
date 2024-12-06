/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:01:55 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/27 01:19:23 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char check)
{
	int		count;
	char	*base;

	count = 0;
	if (check == 'x')
		base = "0123456789abcdef";
	else if (check == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
		count += ft_putchar(base[nb % 16]);
	else
	{
		count += ft_putnbr_base(nb / 16, check);
		count += ft_putnbr_base(nb % 16, check);
	}
	return (count);
}
