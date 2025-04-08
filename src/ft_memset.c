/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:49:15 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/07 19:46:11 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buff, int c, size_t n)
{
	unsigned char	*string;
	int				i;

	string = (unsigned char *)buff;
	i = 0;
	while (string[i] && i < n)
	{
		string[i] = c;
		i++;
	}
}
