/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:31:28 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/20 20:33:34 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int	main(void)
{
	size_t	*array;
	array = 0;
	array = ft_calloc(100, ((size_t)1<<(sizeof(size_t) * 8 - 1)) + 1);
	if (array)
		ft_putendl_fd("Nao deu bom!", 1);
}
