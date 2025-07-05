/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:20:21 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 17:45:17 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*input1;
	unsigned char	*input2;
	size_t			i;

	input1 = (unsigned char *) s1;
	input2 = (unsigned char *) s2;
	i = 0;
	while (n > i)
	{
		if (input1[i] != input2[i])
			return (input1[i] - input2[i]);
		i++;
	}
	return (0);
}
