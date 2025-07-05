/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whatisletter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:50:29 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:53:38 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_whatisletter(char second_letter, va_list lst)
{
	int	printed_len;

	printed_len = 0;
	if (second_letter == 'c')
		printed_len += ft_putchar(lst);
	else if (second_letter == 's')
		printed_len += ft_putstr(lst);
	else if (second_letter == 'd' || second_letter == 'i')
		printed_len += ft_putnbr(lst);
	else if (second_letter == 'u')
		printed_len += ft_print_unsigned(lst);
	else if (second_letter == 'x')
		printed_len += ft_print_x(lst);
	else if (second_letter == 'X')
		printed_len += ft_print_bigx(lst);
	else if (second_letter == 'p')
		printed_len += ft_print_pointer(lst);
	else
		printed_len += ft_print_percent(second_letter);
	return (printed_len);
}
