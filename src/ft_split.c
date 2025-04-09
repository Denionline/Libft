/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:58 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 18:22:32 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char *str, char sep)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			cnt++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (cnt);
}

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t 	lword;
	size_t 	i;
	
	lword = ft_countwords((char *)s, c);
	strs = (char **)malloc((ft_countwords((char *)s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
		{
			if (!ft_strchr((char *)s, c))
				lword = ft_strlen((char *)s);
			else
				lword = ft_strchr((char *)s, c) - s;
			strs[i++] = ft_substr((char *)s, 0, lword);
			s += lword;
		}
	}
	strs[i] = NULL;
	return (strs);
}
