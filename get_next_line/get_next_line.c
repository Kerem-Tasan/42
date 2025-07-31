/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 05:13:37 by ktasan            #+#    #+#             */
/*   Updated: 2025/07/16 03:23:58 by ktasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*rest_of_file(char **rest)
{
	char	*newline_pos;
	char	*line;
	char	*temp;
	size_t	line_len;

	newline_pos = ft_strchr(*rest, '\n');
	if (!newline_pos)
		return (NULL);
	line_len = (newline_pos - *rest) + 1;
	line = (char *)malloc(sizeof(char) * (line_len + 1));
	if (!line)
		return (NULL);
	ft_strncpy(line, *rest, line_len);
	line[line_len] = '\0';
	temp = ft_strdup(newline_pos + 1);
	free(*rest);
	*rest = temp;
	return (line);
}

static char	*last_of_file(char **rest)
{
	char	*line;

	if (!*rest || !**rest)
	{
		if (*rest)
			free(*rest);
		*rest = NULL;
		return (NULL);
	}
	line = ft_strdup(*rest);
	free(*rest);
	*rest = NULL;
	return (line);
}

static char	*read_and_join(int fd, char *rest)
{
	char	*buffer;
	int		bytes_read;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(rest, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(rest);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		rest = ft_strjoin(rest, buffer);
	}
	free(buffer);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!rest)
		rest = ft_strdup("");
	rest = read_and_join(fd, rest);
	if (!rest)
		return (NULL);
	if (ft_strchr(rest, '\n'))
	{
		line = rest_of_file(&rest);
		return (line);
	}
	else
	{
		line = last_of_file(&rest);
		return (line);
	}
}
