/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:26:21 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/16 19:46:53 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2, int rd)
{
	size_t	s1_len;
	char	*new;

	if (!rd)
		return ((char *)s1);
	if (!s1)
		return (ft_substr(s2, 0, rd));
	s1_len = ft_strlen(s1);
	new = malloc(sizeof(char) * (s1_len + rd + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, s1_len);
	ft_strlcpy(&new[s1_len], s2, rd + 1);
	return (new);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	b;

	if (!dest && !src)
		return (NULL);
	b = 0;
	while (b < n && dest != src)
	{
		*((t_uc *)(dest + b)) = *((const t_uc *)(src + b));
		++b;
	}
	return (dest);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size)
	{
		while (src[x] && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = 0;
	}
	return (ft_strlen(src));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_l;

	if (!s)
		return (NULL);
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_substr(s, 0, 0));
	if (start + len >= s_l)
	{
		sub = malloc(sizeof(char) * (s_l - start + 1));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, &s[start], (s_l - start + 1));
	}
	else
	{
		sub = malloc(sizeof(char) * (len + 1));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, &s[start], (len + 1));
	}
	return (sub);
}

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
