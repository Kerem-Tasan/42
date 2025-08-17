/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:54:22 by kerem             #+#    #+#             */
/*   Updated: 2025/08/16 21:48:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "push_swap.h"

int main(int argc, char *argv[])
{
 char *all_args;

    if (argc < 2)
    {
        ft_printf("Kullanım: ./push_swap arg1 arg2 ...\n");
        return 0;
    }

    all_args = arguments(argc, argv);
    ft_printf("Birleştirilmiş argümanlar: %s\n", all_args);
    free(all_args);

    return 0;
}


