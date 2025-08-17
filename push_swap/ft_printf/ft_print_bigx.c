/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bigx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 02:03:16 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:34:13 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_bigx(va_list list)
{
	unsigned int	x;

	x = va_arg(list, unsigned int);
	return (ft_putnbr_base(x, "0123456789ABCDEF"));
}
