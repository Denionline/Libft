/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:59:10 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/11 12:36:00 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lsize;

	lsize = ft_strlen(little);
	if (lsize > ft_strlen(big))
		return (NULL);
	if (lsize == 0)
		return ((char *)big);
	while (*big && len)
	{
		if (!ft_strncmp(big, little, lsize) && len >= lsize)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
