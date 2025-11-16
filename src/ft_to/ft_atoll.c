/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:39:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/11/16 17:41:27 by dximenes         ###   ########.fr       */
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
		if (ft_isdigit(nptr[i]))
			break ;
		if (nptr[i] == '+' || nptr[i] == '-')
			count++;
		i++;
	}
	return (count);
}

long long	ft_atoll(const char *nptr)
{
	long long	res;
	int			neg;

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
