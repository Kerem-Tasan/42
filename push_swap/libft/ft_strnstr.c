/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 20:29:32 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/21 13:41:04 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *mainStr, const char *search, size_t size)
{
	size_t	i;
	size_t	searchlen;

	if (*search == '\0')
		return ((char *)mainStr);
	searchlen = ft_strlen(search);
	i = 0;
	while (mainStr[i] != '\0' && i + searchlen <= size)
	{
		if (ft_strncmp(&mainStr[i], search, searchlen) == 0)
			return ((char *)&mainStr[i]);
		i++;
	}
	return (NULL);
}
