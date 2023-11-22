/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:44:59 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/22 17:16:39 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	char	sign;
	int		i;

	res = 0;
	sign = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign == -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i] + 48);
	return (res * sign);
}
