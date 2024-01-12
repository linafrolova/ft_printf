/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:32:54 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:19:35 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Zeroes out a block of memory.
Parameters:
void *s: Memory address.
size_t n: Number of bytes to zero.*/
#include "libft.h"

void	*ft_bzero(void *dest, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)dest++ = '\0';
		n--;
	}
	return (dest);
}
