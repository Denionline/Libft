/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:39:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 10:14:34 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *nbr)
{
	size_t res;
	size_t sig;
	size_t neg;
	size_t i;

	sig = 0;
	i = 0;
	while ((nbr[i] >= '\a' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			neg = 1;
		sig++;		
		if (sig > 1)
			return (0);
		i++;
	}
	res = 0;
	while (nbr[i] && (nbr[i] >= '0' && nbr[i] <= '9'))
	{
		res *= 10;
		res += nbr[i] - '0';
		i++; 
	}
	if (neg)
		return (-res);
	return (res);
}
