/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:10:00 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 18:34:11 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*res;

	if (n_items == 0 || size == 0)
		return (NULL);
	res = (void *) malloc(n_items * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, (n_items * size));
	return (res);
}
