/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:26:22 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/06 11:51:24 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*str_d;
	unsigned char  *str_s;
	size_t         i;

	str_d = (unsigned char *)dest;
	str_s = (unsigned char *)src;
	
   if (str_d == str_s || n == 0)
      return dest;

   if (str_d < str_s)
   {
      i = 0;
      while (i < n)
      {
         str_d[i] = str_s[i];
         i++;
      }
   }
   else
   {
      i = n;
      while (i > 0)
      {
         str_d[i - 1] = str_s[i - 1];
         i--;
      }
   }
   return (dest);
}
