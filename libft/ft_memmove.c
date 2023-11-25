/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:49:02 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/25 18:25:41 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (dest < src)
		ft_memcpy(dest, src, count);
	if (dest == src)
		return (dest);
	while (count--)
		*((t_uc *)(dest + count)) = *((t_uc *)(src + count));
	return (dest);
}
