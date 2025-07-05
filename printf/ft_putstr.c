/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:51:04 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:49:10 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
