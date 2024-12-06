/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_un.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:17:58 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/22 07:45:43 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr >= 0 && nbr <= 9)
	{
		count += ft_putchar(nbr + '0');
	}
	else if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putnbr(nbr % 10);
	}
	return (count);
}
