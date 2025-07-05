/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:22:39 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/05 04:06:21 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_whatisletter(char second_letter, va_list lst);
int		ft_printf(const char *format, ...);
int		ft_print_percent(char second_letter);
int		ft_putchar(va_list lst);
int		ft_putstr(va_list args);
int		ft_putnbr(va_list lst);
char	*reversechar(char *s);
size_t	ft_strlen(const char *str);
int		ft_print_unsigned(va_list lst);
char	*ft_itoa(int n);
int		ft_print_pointer(va_list args);
int		ft_putnbr_base(unsigned long long n, char *base_chars);
int		ft_print_bigx(va_list list);
int		ft_print_x(va_list list);
#endif