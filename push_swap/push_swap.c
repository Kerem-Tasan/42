/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:54:22 by kerem             #+#    #+#             */
/*   Updated: 2025/08/17 03:24:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int main(int argc, char *argv[])
{
    char **all_args;
    int i;

    if (argc < 2)
        return (0);
    // argümanların hepsini 2 boyutlu diziye atmaca    
    all_args = ft_split(arguments(argc, argv), " ");
    // 



    //free
    i = 0;
    while (all_args[i])
    {
        free(all_args[i]);
        i++;
    }
    free(all_args);
    return (0);
}
