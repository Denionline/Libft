/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:37:29 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 21:36:23 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	init;
	size_t	lstr;

	lstr = ft_strlen((char *)s1);
	init = 0;
	while (ft_strchr((char *)set, s1[init]))
		init++;
	end = 0;
	while (ft_strchr((char *)set, s1[lstr - end - 1]))
		end++;
	return (ft_substr((char *)s1, init, lstr - end));
}
