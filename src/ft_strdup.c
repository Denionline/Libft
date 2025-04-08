/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:11:37 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 14:20:08 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*array;
	int		i;

	array = malloc((ft_strlen(str) + 1) * sizeof(char));
	i = 0;
	array[i] = 0;
	if (!array)
		return (NULL);
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = 0;
	return (array);
}
