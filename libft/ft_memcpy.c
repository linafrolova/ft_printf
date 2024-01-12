/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:31:54 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:20:05 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies a block of memory from source to destination.
Parameters:
void *dest: Destination memory address.
const void *src: Source memory address.
size_t n: Number of bytes to copy.*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				counter;
	unsigned char		*d;
	unsigned const char	*s;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	counter = 0;
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (dest);
}
