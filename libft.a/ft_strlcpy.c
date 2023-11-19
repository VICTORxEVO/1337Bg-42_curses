#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src,size_t size)
{
    size_t x;

    x = 0;
    if(size)
    {
        while (src[x] && x < (size - 1))
            dest[x++] = src[x];
        dest[x] = 0;
    }
    return (ft_strlen(src));
}