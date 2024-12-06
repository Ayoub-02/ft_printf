/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:03:04 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/27 16:57:50 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned int nb, char check);
int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr_un(unsigned int nbr);
int	ft_print_ptr(void *ptr);

#endif