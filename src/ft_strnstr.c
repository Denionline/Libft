/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:59:10 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 22:00:05 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s_little;
	char	*s_big;
	size_t	size;
	size_t	i;
	size_t	j;

	s_big = (char *)big;
	s_little = (char *)little;
	size = ft_strlen(s_little);
	if (size == 0)
		return (s_big);
	i = 0;
	while (s_big[i] && i < len)
	{
		j = 0;
		while (s_big[i + j] == s_little[j] && j < size)
			j++;
		if (j == size)
			return (s_big + i);
		i++;
	}
	return (NULL);
}
