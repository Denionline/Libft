/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:58 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/08 20:47:36 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	size_t i;

	
}

int	main(void)
{
	char	str[] = {"test1 test2 test3 test4 test5"};
	char	sep = " ";
	char	**res = ft_split(str, sep);
	for (int i = 0; res[i]; i++)
		printf("%s\n", res[i]);
}