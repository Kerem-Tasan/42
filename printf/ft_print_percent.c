/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:13:29 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 03:28:27 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(char second_letter)
{
	if (second_letter == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else
	{
		write(1, "%", 1);
		write(1, &second_letter, 1);
		return (2);
	}
	return (1);
}
