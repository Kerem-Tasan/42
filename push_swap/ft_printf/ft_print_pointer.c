/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:46:27 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:45:07 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(va_list list)
{
	void				*raw_pointer;
	unsigned long long	num;
	int					counter;

	counter = 0;
	raw_pointer = va_arg(list, void *);
	num = (unsigned long long)raw_pointer;
	if (raw_pointer == NULL)
	{
		write(1, "(nil)", 5);
		counter += 5;
		return (counter);
	}
	write(1, "0x", 2);
	counter += 2;
	counter += ft_putnbr_base(num, "0123456789abcdef");
	return (counter);
}
