/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 05:13:35 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/16 03:33:12 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*new_string;
	int		i;
	int		j;

	a = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc(a + 1);
	if (!new_string)
		return (0);
	i = 0;
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	free((void *)s1);
	return (new_string);
}

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t	index;

	index = 0;
	if (!dest || !src)
		return (NULL);
	while (len > index && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	while (index < len)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;
	size_t	i;

	if (!s1)
		return (NULL);
	len = 0;
	while (s1[len])
		len++;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
