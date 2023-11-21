/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:55:33 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/21 15:40:45 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	while (*big && len)
	{
		if (!(ft_strncmp(big, little, little_len)))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
