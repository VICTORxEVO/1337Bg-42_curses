/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:37:32 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/25 21:38:19 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list tm;

	if (!*lst)
		return ;
	while ((*lst) != NULL)
	{
		tm = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tm;
	}
	*lst = NULL;
}