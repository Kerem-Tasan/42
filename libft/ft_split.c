/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:28:44 by ktasan            #+#    #+#             */
/*   Updated: 2025/06/20 21:16:24 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **list, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(list[i]);
		i++;
	}
	free(list);
}

static int	wordcount(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	nextword(char const *s, char c, int *wordid, int *wordstart)
{
	int	len;

	len = 0;
	while (s[*wordid] == c)
		(*wordid)++;
	*wordstart = *wordid;
	while (s[*wordid] != c && s[*wordid] != '\0')
	{
		len++;
		(*wordid)++;
	}
	return (len);
}

static int	split_fill(char const *s, char c, char **split_list)
{
	int	strindex;
	int	wordindex;
	int	firstindex;
	int	length;

	strindex = 0;
	wordindex = 0;
	while (s[strindex] != '\0')
	{
		length = nextword(s, c, &strindex, &firstindex);
		if (s[firstindex] == '\0' && length == 0)
			break ;
		split_list[wordindex] = ft_substr(s, firstindex, length);
		if (split_list[wordindex] == NULL)
		{
			free_split(split_list, wordindex);
			return (1);
		}
		wordindex++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split_list;
	int		count;

	if (!s)
		return (NULL);
	count = wordcount(s, c);
	split_list = (char **)malloc((count + 1) * sizeof(char *));
	if (split_list == NULL)
		return (NULL);
	if (count == 0)
	{
		split_list[0] = NULL;
		return (split_list);
	}
	if (split_fill(s, c, split_list) == 1)
		return (NULL);
	split_list[count] = NULL;
	return (split_list);
}
