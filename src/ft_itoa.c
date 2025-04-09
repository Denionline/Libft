/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:40:19 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 23:11:15 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getsize(long int nbr)
{
	int	i;

	i = 1;
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	size_t		neg;
	long int	nlong;

	nlong = n;
	neg = nlong < 0;
	if (nlong < 0)
		nlong *= -1;
	size = ft_getsize(nlong) + neg;
	str = (char *)malloc(size + 1);
	str[0] = '\0';
	if (!str)
		return (NULL);
	ft_memset(str, '-', size);
	str[size] = '\0';
	while (size > neg)
	{
		str[(size--) - 1] = nlong % 10 + '0';
		nlong /= 10;
	}
	return (str);
}
