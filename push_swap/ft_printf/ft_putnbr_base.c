/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:40:43 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:43:47 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base_chars)
{
	int	count_print;
	int	base_len;

	base_len = ft_strlen(base_chars);
	count_print = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n >= (unsigned long long) base_len)
		count_print += ft_putnbr_base(n / base_len, base_chars);
	write(1, &base_chars[n % base_len], 1);
	count_print++;
	return (count_print);
}
