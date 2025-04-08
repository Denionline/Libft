/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:51:39 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/07 19:18:00 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t s)
{
	size_t lsrc;
	size_t lcopy;

	lsrc = ft_strlen(src);

	if (lsrc >= s)
	{
		lcopy = s - 1;
	}
	else
	{
		lcopy = lsrc;
	}
	if (s > 0)
	{
		memcpy(dst, src, lcopy);
		dst[lcopy] = '\0';
	}
	return (lsrc);
}
