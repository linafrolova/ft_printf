/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:57:06 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:21:18 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies a string to a destination with a specified size.
Parameters:
char *dest: Destination string.
const char *src: Source string.
size_t size: Size of the destination buffer.*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < size)
		ft_memcpy(dest, src, src_size + 1);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (src_size);
}
