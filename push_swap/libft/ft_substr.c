/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:47:48 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 20:54:05 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew_empty(void)
{
	char	*empty_str;

	empty_str = (char *)malloc(1);
	if (!empty_str)
		return (NULL);
	empty_str[0] = '\0';
	return (empty_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		s_len;
	size_t		actual_len;
	size_t		j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strnew_empty());
	if (len > (s_len - start))
		actual_len = s_len - start;
	else
		actual_len = len;
	sub = (char *)malloc(actual_len + 1);
	if (!sub)
		return (NULL);
	j = 0;
	while (j < actual_len)
	{
		sub[j] = s[start + j];
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
