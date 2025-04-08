/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:59:10 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 09:38:26 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *fnd, size_t n)
{
	size_t i;
	size_t j;
	size_t lfnd;

	lfnd = ft_strlen(fnd);
	if (lfnd == 0)
		return (str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == fnd[j] && j < lfnd)
			j++;
		if (j == lfnd)
			return (str + i);
		i++;
	}
	return (NULL);
}
