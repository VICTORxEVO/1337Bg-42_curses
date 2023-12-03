/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:37:32 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/12/01 20:59:35 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tm;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		tm = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tm;
	}
	*lst = NULL;
}
