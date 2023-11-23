/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:55:37 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/21 15:38:10 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	b;

	b = ft_strlen(str);
	while (--b >= 0)
	{
		if (str[b] == (unsigned char)c)
			return ((char *)&str[b]);
	}
	return (NULL);
}
