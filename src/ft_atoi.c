/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:39:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/11 17:12:36 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countsig(char *nptr)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (nptr[i])
	{
		if (nptr[i] == '+' || nptr[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int	ft_atoi(const char *nptr)
{
	size_t	res;
	size_t	neg;

	neg = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (ft_countsig((char *)nptr) > 1)
		return (0);
	if (*nptr == '+')
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	res = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * neg);
}
