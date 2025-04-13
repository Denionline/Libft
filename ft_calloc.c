/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:10:00 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/13 16:27:05 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*res;

	if (n_items == 0 || size == 0)
		return (malloc(0));
	res = (void *) malloc(n_items * size);
	if (!res)
		return (NULL);
	ft_bzero(res, (n_items * size));
	return (res);
}
