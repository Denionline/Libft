/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:56:28 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/07 22:53:38 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	unsigned char	*s_str;
	size_t i;

	s_str = (unsigned char*)str;

	i = 0;
	while (s_str[i] && i < n)
	{
		if (s_str[i] == c)
			return (s_str + i);
		i++;
	}
	return NULL;
}
