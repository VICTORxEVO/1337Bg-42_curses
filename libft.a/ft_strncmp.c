#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int c;

    c = 0;
    while (str1[c] && str2[c] && (str1[c] == str2[c]) && n--)
        c++;
    return (str1[c] - str2[c]);
}