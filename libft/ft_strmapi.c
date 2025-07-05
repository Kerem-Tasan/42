/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:09:58 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 20:27:39 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	int		index;
	size_t	countofs;

	index = 0;
	if (!s || !f)
		return (NULL);
	countofs = ft_strlen(s);
	new_string = (char *)malloc(sizeof(char) * (countofs + 1));
	if (!new_string)
		return (NULL);
	while (s[index] != '\0')
	{
		new_string[index] = f(index, s[index]);
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
