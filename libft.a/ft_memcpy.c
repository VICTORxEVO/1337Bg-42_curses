/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:49:00 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/19 11:49:58 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t b;

	b = 0;
	while (b < n)
	{
		*((unsigned char *)(dest + b)) = *((const unsigned char *)(src + b));
		++b;
	}
	return (dest);
}