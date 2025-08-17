/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:57:51 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 17:13:07 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *input, int searchinput, size_t n)
{
	unsigned char		*tempstr;
	unsigned char		tofind;
	size_t				i;

	tempstr = (unsigned char *) input;
	tofind = (unsigned char) searchinput;
	i = 0;
	while (i < n)
	{
		if (tempstr[i] == tofind)
			return ((void *) &tempstr[i]);
		i++;
	}
	return (NULL);
}
