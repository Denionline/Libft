/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:39:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/11 15:46:30 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	char	*s_nbr;
	size_t	res;
	size_t	neg;
	size_t	i;

	s_nbr = (char *)nbr;
	neg = 1;
	i = 0;
	while ((s_nbr[i] >= '\t' && s_nbr[i] <= '\r') || s_nbr[i] == ' ')
		i++;
	if (s_nbr[i] == '+')
		i++;
	if (s_nbr[i++] == '-')
		neg = -1;
	res = 0;
	while (s_nbr[i] && ft_isdigit(s_nbr[i]))
	{
		res = (res * 10) + (s_nbr[i] - '0');
		i++;
	}
	return (res * neg);
}
