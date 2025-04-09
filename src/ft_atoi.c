/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:39:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/09 21:44:35 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <unistd.h>

int	ft_atoi(const char *nbr)
{
	char	*s_nbr;
	size_t	res;
	size_t	sig;
	size_t	neg;
	size_t	i;

	s_nbr = (char *)nbr;
	sig = 0;
	i = 0;
	while ((s_nbr[i] >= '\a' && s_nbr[i] <= '\r') || s_nbr[i] == ' ')
		i++;
	while (s_nbr[i] == '+' || s_nbr[i] == '-')
	{
		sig++;
		if (s_nbr[i++] == '-')
			neg = 1;
		if (sig > 1)
			return (0);
	}
	res = 0;
	while (s_nbr[i] && (s_nbr[i] >= '0' && s_nbr[i] <= '9'))
		res = (res * 10) + (s_nbr[i++] - '0');
	if (neg)
		return (-res);
	return (res);
}
