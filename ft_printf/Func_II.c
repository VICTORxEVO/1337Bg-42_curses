/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func_II.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:54:39 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/09 16:22:20 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf.h"

static void	ft_handle(size_t nbr, char *base, int *len)
{
	if (nbr > 0)
	{
		ft_handle(nbr / 16, base, len);
		ft_putchar(base[nbr % 16], len);
	}
}

void	ft_putnbr_hec(unsigned int nb, char type, int *len)
{
	if (nb == 0)
		ft_putchar('0', len);
	else if (type == 'X')
		ft_handle((size_t)nb, "0123456789ABCDEF", len);
	else
		ft_handle((size_t)nb, "0123456789abcdef", len);
}

void	ft_putadrr(void *f, int *len)
{
	size_t	fpro;

	fpro = (size_t)f;
	ft_putstr("0x", len);
	if (fpro == 0)
		ft_putchar('0', len);
	else
		ft_handle(fpro, "0123456789abcdef", len);
}
