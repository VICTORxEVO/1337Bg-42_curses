/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:49:43 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/11/30 11:32:09 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_nod;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp_nod = ft_lstnew(f(lst->content));
		if (!temp_nod)
		{
			ft_lstclear(&new_lst, del);
			del(temp_nod);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp_nod);
		lst = lst->next;
	}
	return (new_lst);
}
