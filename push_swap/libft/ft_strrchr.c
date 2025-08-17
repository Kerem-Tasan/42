/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 20:48:04 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 20:49:57 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int str)
{
	const char	*final;

	final = 0;
	while (*s)
	{
		if (*s == (char)str)
			final = s;
		s++;
	}
	if ((char)str == '\0')
		return ((char *)s);
	return ((char *)final);
}
