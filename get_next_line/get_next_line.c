/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:24:19 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/16 16:28:15 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*q_res;
	char		buff[BUFFER_SIZE];
	int			nl_ind;
	ssize_t		rd;

	rd = read(fd, buff, BUFFER_SIZE);
	while (rd >= 0)
	{
		q_res = ft_strjoin(q_res, buff, rd);
		nl_ind = check_nl(q_res);
		if (nl_ind != -1947)
			return (handle_it(&q_res, nl_ind + 1));
		if (!q_res || (!rd && !(*q_res)))
			break ;
		if (!rd)
			return (get_other_line(&q_res));
		rd = read(fd, buff, BUFFER_SIZE);
	}
	free(q_res);
	q_res = NULL;
	return (NULL);
}

char	*handle_it(char **buff, int nl_ind)
{
	char	*line;
	char	*tmp;

	line = ft_substr(*buff, 0, (size_t)(nl_ind));
	tmp = ft_substr(*buff, nl_ind, ft_strlen(*buff + nl_ind));
	free(*buff);
	*buff = tmp;
	return (line);
}

char	*get_other_line(char **buff)
{
	char	*line;
	char	*tmp;

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

// int main(void)
// {
//     int i = -1;
//     int fda = open("armin.txt", O_RDONLY);

//     while(++i != 3)
//     {
//         printf("armin line number %d->%s", get_next_line(fda), i);
//     }
//     close(fda);

//     return (0);
// }
