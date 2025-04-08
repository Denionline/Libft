/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:02:37 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 19:21:07 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *buff, size_t n)
{
	unsigned char	*string;
	int				i;

	string = (unsigned char *)buff;
	i = 0;
	while (string[i] && i < n)
	{
		string[i] = string[(n - 1) + i];
		i++;
	}
}
