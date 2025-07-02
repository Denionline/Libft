/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:59:45 by dximenes          #+#    #+#             */
/*   Updated: 2025/07/02 18:02:20 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int str_len(char * str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_invalid_base(char * base)
{
	int i;
	int j;

	i = 0;
	while (base[i] == '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] == '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if ((base[i] >= '\a' && base[i] <= '\r') || base[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int find_n_in_base(char pos, char * base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == pos)
			return (i);
		i++;
	}
	return (-1);
}

int skip_conditions(char * str, int * m)
{
	int i;

	i = 0;
	*m = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*m += 1;
		i++;
	}
	return (i);
}

int ft_atoi_base(char * str, char * base)
{
	int base_size;
	int nbr_base;
	int result;
	int minus;
	int i;

	minus = 0;
	if (is_invalid_base(base) || str_len(base) < 2)
		return (0);
	i = skip_conditions(str, &minus);
	base_size = str_len(base);
	result = 0;
	while (str[i])
	{
		nbr_base = find_n_in_base(str[i], base);
		result = result * base_size + nbr_base;
		i++;
	}
	if ((minus % 2) != 0)
		return (-result);
	return (result);
}
