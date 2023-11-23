/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:55:45 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/19 11:55:46 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_l;

	if (!s)
		return (NULL);
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_calloc(1, sizeof(char)));
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
