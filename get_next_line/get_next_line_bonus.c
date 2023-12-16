/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:25:35 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/16 21:00:47 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*q_res[1024];
	char		*buff;
	int			nl_ind;
	ssize_t		rd;

	buff = malloc(BUFFER_SIZE);
	if (!buff)
		return (blue_screen(&q_res[fd], &buff));
	rd = read(fd, buff, BUFFER_SIZE);
	while (rd >= 0)
	{
		q_res[fd] = ft_strjoin(q_res[fd], buff, rd);
		nl_ind = check_nl(q_res[fd]);
		if (nl_ind != -1947)
			return (handle_it(&q_res[fd], nl_ind + 1, &buff));
		if (!q_res[fd] || (!rd && !(*q_res[fd])))
			break ;
		if (!rd)
			return (get_other_line(&q_res[fd], &buff));
		rd = read(fd, buff, BUFFER_SIZE);
	}
	return (blue_screen(&q_res[fd], &buff));
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

char	*get_other_line(char **buff, char **container)
{
	char	*line;
	char	*tmp;

	free(*container);
	line = ft_substr(*buff, 0, ft_strlen(*buff));
	tmp = ft_substr(*buff, 0, 0);
	free(*buff);
	*buff = tmp;
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

void	*blue_screen(char **q_res, char **container)
{
	free(*container);
	free(*q_res);
	*q_res = NULL;
	return (NULL);
}
