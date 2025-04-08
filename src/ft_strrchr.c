/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:34:13 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/07 20:46:26 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	size_t i;
	size_t last;

	last = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	return (str + last);
}
