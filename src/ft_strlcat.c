/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:11:15 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/07 19:45:41 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t s)
{
	size_t i;
	size_t ldst;
	size_t lsrc;

	ldst = 0;
	lsrc = ft_strlen(src);
	while (dst[ldst] && ldst < s)
		ldst++;
	
	if (ldst == s)
		return (lsrc + s);
	
	i = 0;
	while (src[i] && ((ldst + i) + 1) < s)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (lsrc + ldst);
}
