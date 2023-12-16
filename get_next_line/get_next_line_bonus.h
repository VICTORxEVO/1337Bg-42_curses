#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef unsigned char t_uc;

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8370000
#endif


char    *handle_it(char **buff,int nl_ind);
char    *get_other_line(char **buff);
int     check_nl(char *str);
char	*ft_strjoin(char const *s1, char const *s2, int rd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

#endif