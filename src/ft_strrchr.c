/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:34:13 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 22:22:00 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	r;

	if ((char)c == '\0')
		return ((char *)s);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			r = i;
		i++;
	}
	return ((char *)s + r);
}
