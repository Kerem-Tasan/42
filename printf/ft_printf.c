/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:28:25 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:36:04 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg_pointer;
	int		i;
	int		printed_count;

	va_start(arg_pointer, format);
	i = 0;
	printed_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			printed_count += ft_whatisletter(format[i], arg_pointer);
		}
		else
		{
			write(1, &format[i], 1);
			printed_count++;
		}
		i++;
	}
	va_end(arg_pointer);
	return (printed_count);
}
