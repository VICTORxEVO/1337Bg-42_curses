/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:55:57 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/19 11:55:58 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		return (x - 32);
	return (x);
}