/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:34:13 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 21:33:18 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	end;
	size_t	i;
	char	*s_s;

	s_s = (char *)s;
	i = 0;
	while (s_s[i])
	{
		if (s_s[i] == c)
			end = i;
		i++;
	}
	return (s_s + end);
}
