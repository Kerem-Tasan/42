/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:46:35 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:31:10 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list lst)
{
	unsigned int	a;
	int				len;

	a = va_arg(lst, unsigned int);
	len = ft_putnbr_base(a, "0123456789");
	return (len);
}
