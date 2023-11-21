/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:48:58 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/21 13:29:41 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while ((*(const uc *)str1 == *(const uc *)str2) && n--)
	{
		str1++;
		str2++;
	}
	return (*(uc *)str1 - *(uc *)str2);
}
