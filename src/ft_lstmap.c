/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:18:46 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/13 09:29:33 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	if (!lst)
		return (lst);
	newlst = ft_lstnew(f(lst->content));
	while (lst->next != NULL)
	{
		lst = lst->next;
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&newlst ,del);
			return (lst);
		}
		ft_lstadd_back(&newlst, node);
	}
	return (newlst);
}
