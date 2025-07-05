/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:24:51 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 19:58:51 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	longn;
	char	chr;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	longn = n;
	if (longn < 0)
	{
		longn = -longn;
		write(fd, "-", 1);
	}
	if (longn >= 10)
		ft_putnbr_fd(longn / 10, fd);
	chr = (char)(longn % 10 + 48);
	write(fd, &chr, 1);
}
