/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:54:30 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 17:09:28 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumber(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	if (n == -2147483648)
		return (11);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*reversechar(char *s)
{
	int		start;
	int		end;
	char	temp;	

	start = 0;
	end = ft_strlen(s) - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	long	num;
	char	*str;

	i = 0;
	num = n;
	if (num < 0)
		num = -num;
	str = (char *)malloc(sizeof(char) * (getnumber(n) + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (reversechar(str));
}
