/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:43:32 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 21:08:22 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cont;

	cont = (t_list *)malloc(sizeof(t_list));
	if (!cont)
		return (NULL);
	cont -> content = content;
	cont -> next = NULL;
	return (cont);
}
