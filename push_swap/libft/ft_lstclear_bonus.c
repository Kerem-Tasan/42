/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:51:27 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 21:06:15 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*current;

	if (!*lst || !del || !*lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current -> next;
		del(current -> content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
