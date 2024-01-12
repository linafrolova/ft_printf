/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:53:48 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:18:42 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Fills a block of memory with a specified value.
Parameters:
void *s: Memory address.
int c: Value to be set.
size_t n: Number of bytes to set.*/
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*dest_ptr;

	dest_ptr = dest;
	while (n > 0)
	{
		*(unsigned char *)dest++ = (unsigned char)c;
		n--;
	}
	return (dest_ptr);
}
