/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:36 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:20:48 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Moves a block of memory from source to destination, handling overlap.
Parameters:
void *dest: Destination memory address.
const void *src: Source memory address.
size_t n: Number of bytes to move.*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;

	d_tmp = (unsigned char *)dest;
	s_tmp = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d_tmp < s_tmp && (dest || src))
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			d_tmp[n - 1] = s_tmp[n - 1];
			n--;
		}
	}
	return (dest);
}
