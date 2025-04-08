/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:37:29 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 15:25:54 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t init;
	size_t end;
	size_t ldel;
	size_t lstr;
	char	*str;

	lstr = ft_strlen((char *)s1);
	init = 0;
	while (ft_strchr((char *)set, s1[init]))
		init++;
	end = 0;
	while (ft_strchr((char *)set, s1[lstr - end - 1]))
		end++;
	ldel = init + end;
	str = (char *)malloc(((lstr - ldel) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ((lstr - ldel) + 1))
	{
		str[i] = s1[init + i];
		i++;
	}
	return (str);
}

//Usar ft_substr

int	main(void)
{
	char	*str = "  -  Suco de Manga   ";
	char	*set = " -";
	printf("%s\n", ft_strtrim(str, set));
}