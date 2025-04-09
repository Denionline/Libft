/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:11:28 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 19:10:25 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s_str;

	s_str = (char *)s;
	if (c == '\0')
	{
		s_str[0] = '\0';
		return (s_str);
	}
	i = -1;
	while (s_str[++i])
		if (s_str[i] == c)
			return (s_str + i);
	return (NULL);
}
