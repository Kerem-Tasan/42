/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:25:49 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 21:10:46 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	numbercontrol(const char *str, int i, int sign)
{
	long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (sign == 1 && result > 2147483647LL)
			return (2147483647);
		if (sign == -1 && result * sign < -2147483648LL)
			return (-2147483648);
		i++;
	}
	return ((int)(result * sign));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (numbercontrol(str, i, sign));
}
