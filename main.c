/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:31:28 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/22 20:46:13 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*lst = NULL;
	char	**split = ft_split("Item1,Item2,Item3", ',');

	for (int i = 0; split[i]; i++)
		ft_lstadd_back(&lst, ft_lstnew(split[i]));
	for(t_list *node = lst; node != NULL ; node = node->next)
		ft_putendl_fd(node->content, 1);
	ft_lstclear(&lst, free);
	free(split);
}
