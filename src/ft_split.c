/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:58 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 23:12:19 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_countwords(char *str, char sep)
{
	size_t cnt;
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
	size_t n;
	size_t j;
	size_t i;
	size_t nwords;
	char	**strs;
	
	nwords = ft_countwords((char *)s, c);
	strs = (char **)malloc((nwords + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] != c && j < nwords)
		{
			n = 0;
			while (s[i] && s[i] != c)
			{
				n++;
				i++;
			}
			strs[j] = ft_substr((char *)s, i - n, n);
			j++;
		}
	}
	strs[j] = '\0';
	return (strs);
}

int	main(void)
{
	char	str[] = {" test1 test2 test3 test4 test5 "};
	char	sep = ' ';
	char	**res = ft_split(str, sep);
	for (int i = 0; res[i]; i++)
		printf("%s\n", res[i]);
}