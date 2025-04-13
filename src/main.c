/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:38:04 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/13 09:13:55 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_list(t_list *lst)
{
	t_list	*node;
	
	ft_putendl_fd("----------------Test Start----------------", 1);
	node = lst;
	while (node != NULL)
	{
		ft_putendl_fd((char *)node->content, 1);
		node = node->next;
	}
	ft_putendl_fd("-----------------Test End----------------", 1);
}

void	delete_node(void *content)
{
	ft_putstr_fd("Deleted the node: ", 1);
	ft_putendl_fd((char *)content, 1);
}

void	*access_content(void *content)
{
	char	*value;

	value = (char *)content;
	value = ft_strtrim((char *)content, "-");
	return (value);
}

int	main(void)
{
	t_list	*list = ft_lstnew("----Item 0-----");

	list->next = ft_lstnew("----Item 1-----");
	list->next->next = ft_lstnew("----Item 2-----");
	list->next->next->next = ft_lstnew("----Item 3-----");

	test_list(ft_lstmap(list, &access_content, &delete_node));
}