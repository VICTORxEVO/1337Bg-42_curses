#include "libft.h"

static long calc_len(nbr)
{
    long sum;
    if (nbr < 0)
        ++sum;
    while (sum)
    {
        sum /= 10;
        ++sum;
    }
    return (sum);
}




char *ft_itoa(int n)
{
    long f_len;
    char *cp;
    long n_pro;
    if (n == 0)
        return (ft_strdup("0"));
    n_pro = n;
    f_len = calc_len(n_pro) + 1;
    cp = malloc(sizeof(char) * f_len);
    if (!cp)
        return (NULL);
    cp[f_len--] = 0;
    if (n_pro < 0)
    {
        cp = '-';
        n_pro *= -1;
    }
    while (n_pro)
    {
        cp[f_len--] = n_pro % 10 + '0';
        n_pro /= 10;
    }
    return (cp);
}



