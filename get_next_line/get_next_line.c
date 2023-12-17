/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:24:19 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/17 12:01:03 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*q_res;
	char		*buff;
	int			nl_ind;
	ssize_t		rd;

	buff = malloc(BUFFER_SIZE);
	if (!buff || BUFFER_SIZE <= 0)
		return (free_all(&q_res, &buff));
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd >= 0)
	{
		q_res = ft_strjoin(q_res, buff, rd);
		nl_ind = check_nl(q_res);
		if (nl_ind != -1947)
			return (handle_it(&q_res, nl_ind + 1, &buff));
		if (!q_res || (!rd && !(*q_res)))
			break ;
		if (!rd)
			return (get_last_line(&q_res, &buff));
		rd = read(fd, buff, BUFFER_SIZE);
	}
	return (free_all(&q_res, &buff));
}

char	*handle_it(char **buff, int nl_ind, char **container)
{
	char	*line;
	char	*tmp;

	free(*container);
	line = ft_substr(*buff, 0, (size_t)(nl_ind));
	tmp = ft_substr(*buff, nl_ind, ft_strlen(*buff + nl_ind));
	free(*buff);
	*buff = tmp;
	return (line);
}

char	*get_last_line(char **buff, char **container)
{
	char	*line;

	free(*container);
	line = ft_substr(*buff, 0, ft_strlen(*buff));
	free(*buff);
	*buff = NULL;
	return (line);
}

int	check_nl(char *str)
{
	int	m;

	m = 0;
	while (str && str[m])
	{
		if (str[m] == '\n')
			return (m);
		m++;
	}
	return (-1947);
}

void	*free_all(char **q_res, char **container)
{
	free(*container);
	free(*q_res);
	*q_res = NULL;
	return (NULL);
}
