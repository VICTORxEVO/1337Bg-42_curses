/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:04:29 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/24 11:35:52 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_pro;

	if (fd != -1)
	{
		n_pro = (long)n;
		if (n_pro < 0)
		{
			n_pro = -n_pro;
			ft_putchar_fd('-', fd);
		}
		if (n_pro < 10)
			ft_putchar_fd(n_pro + '0', fd);
		else
		{
			ft_putnbr_fd(n_pro / 10, fd);
			ft_putchar_fd((n_pro % 10 + '0'), fd);
		}
	}
}
