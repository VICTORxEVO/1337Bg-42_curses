/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:06:51 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/25 11:23:18 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const s, char const *set)
{
	while (*set)
	{
		if (*set == s)
			return (42);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
		return (ft_strdup(""));
	end = (ft_strlen(s1) - 1);
	start = 0;
	while (s1[start] && check(s1[start], set))
		++start;
	while (s1[end] && check(s1[end], set))
		--end;
	if (end < 0)
		return (ft_substr(s1, start, 0));
	return (ft_substr(s1, start, (end - start + 1)));
}
