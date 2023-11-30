/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:49:02 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/26 15:08:40 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, count));
	while (count--)
		*((t_uc *)(dest + count)) = *((t_uc *)(src + count));
	return (dest);
}
