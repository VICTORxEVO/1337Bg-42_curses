#include "get_next_line_bonus.h"

char    *get_next_line(int fd)
{
    static char *q_res[1024];
    char        buff[BUFFER_SIZE];
    int         nl_ind;
    ssize_t     rd;

    rd = read(fd, buff, BUFFER_SIZE);
    while (rd >= 0)
    {
        q_res[fd] = ft_strjoin(q_res[fd], buff, rd);
        nl_ind = check_nl(q_res[fd]);
        if(nl_ind != -1947)
            return (handle_it(&q_res[fd], nl_ind + 1));
        if (!q_res[fd] || (!rd && !(*q_res[fd])))
            break;
        if (!rd)
            return (get_other_line(&q_res[fd]));
        rd = read(fd, buff, BUFFER_SIZE);
    }
    free(q_res[fd]);
    q_res[fd] = NULL;
    return (NULL);
}
char    *handle_it(char **buff,int nl_ind)
{
    char *line;
    char *tmp;

    line = ft_substr(*buff, 0, (size_t)(nl_ind));
    tmp = ft_substr(*buff, nl_ind, ft_strlen(*buff + nl_ind));
    free(*buff);
    *buff = tmp;
    return (line);
}
char    *get_other_line(char **buff)
{
    char *line;
    char *tmp;

    line = ft_substr(*buff, 0, ft_strlen(*buff));
    tmp = ft_substr(*buff, 0, 0);
    free(*buff);
    *buff = tmp;
    return (line);
}

int check_nl(char *str)
{
    int m;

    m = 0;
    while(str && str[m])
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
//     int fdf = open("falco.txt", O_RDONLY);
//     int fde = open("eren.txt", O_RDONLY);
//     int fda = open("armin.txt", O_RDONLY);
//     printf("\n\n\n");
//     while(++i != 3)
//     {
//         printf("falco line number %d->%s", i, get_next_line(fdf));
//         printf("eren line number %d->%s", i, get_next_line(fde));
//         printf("armin line number %d->%s", i, get_next_line(fda));
//     }
//     close(fdf);
//     close(fde);
//     close(fda);

//     return 0;
// }
