/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takeargument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:50:54 by marvin            #+#    #+#             */
/*   Updated: 2025/08/16 17:50:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void end()
{
    ft_printf("ERROR\n");
    exit(1);
}

static void validate_arg(char *arg)
{
    int i = 0;
    while (arg[i])
    {
        if (!ft_isdigit(arg[i]) && arg[i] != '-' && arg[i] != ' ' && arg[i] != '+')
            end();
        i++;
    }
}

static int isrepeat(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (argv[j])
    {
        while (argv[i])
        {
            if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[j])) == 0)
                return (0);    
        }
    return (1);
        j++;
    }
}

char *arguments(int argc, char *argv[])
{
    int i;
    char *str;
    char *tmp;

    str = ft_strdup("");

    for (i = 1; i < argc; i++)
    {
        validate_arg(argv[i]);
        tmp = ft_strjoin(str, argv[i]);
        free(str);
        str = tmp;
        if (i < argc - 1)
        {
            tmp = ft_strjoin(str, " ");
            free(str);
            str = tmp;
        }
    }
    if (isrepeat)
    {
        free(str);
        ft_printf("ERROR\n");
        exit(1);
    }
    return (str);
}
