/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:24:57 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/17 12:15:18 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned char	t_uc;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char			*handle_it(char **buff, int nl_ind, char **container);
char			*get_next_line(int fd);
char			*get_last_line(char **buff, char **container);
int				check_nl(char *str);
char			*ft_strjoin(char const *s1, char const *s2, int rd);
void			*ft_memcpy(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *str);
void			*free_all(char **q_res, char **container);

#endif
