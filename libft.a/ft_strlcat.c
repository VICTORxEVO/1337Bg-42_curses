#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t src_l;
	size_t dest_l;

	src_l = ft_strlen(src);
	dest_l = ft_strlen(dest);
	i = 0;
	if (dest_l >= size)
		return (size + src_l);
	while (src[i] && dest_l + i < size - 1)
		dest[dest_l + i] = src[i++];
	dest[dest_l + i] = 0;
	return (dest_l + src_l);
}