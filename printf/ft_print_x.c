/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 01:59:38 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:31:53 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(va_list list)
{
	unsigned int	x;

	x = va_arg(list, unsigned int);
	return (ft_putnbr_base(x, "0123456789abcdef"));
}
