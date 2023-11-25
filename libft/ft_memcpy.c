/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:49:00 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/25 18:29:56 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	b;

	b = 0;
	while (b < n)
	{
		*((t_uc *)(dest + b)) = *((const t_uc *)(src + b));
		++b;
	}
	return (dest);
}
