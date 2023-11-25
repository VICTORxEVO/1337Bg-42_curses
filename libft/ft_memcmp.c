/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:48:58 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/25 11:38:32 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n--)
	{
		if ((*(t_uc *)str1) == (*(t_uc *)str2))
		{
			str1++;
			str2++;
		}
		else
			return ((*(t_uc *)str1) - (*(t_uc *)str2));
	}
	return (0);
}
