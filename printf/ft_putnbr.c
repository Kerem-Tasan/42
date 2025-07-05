/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:01:41 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:46:54 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list lst)
{
	int		n;
	int		len;
	char	*s_num;

	n = va_arg(lst, int);
	s_num = ft_itoa(n);
	if (!s_num)
		return (0);
	len = ft_strlen(s_num);
	write(1, s_num, len);
	free(s_num);
	return (len);
}
