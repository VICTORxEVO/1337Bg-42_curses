/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:49:02 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/21 15:45:55 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (dest < src)
		ft_memcpy(dest, src, count);
	while (count--)
		*((t_uc *)(dest + count)) = *((const t_uc *)(src + count));
}
