/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:12:10 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:24:05 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the first occurrence of a character in a block of memory.
Parameters:
const void *s: Memory block to be searched.
int c: The character to search for.
size_t n: Number of bytes to search.*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cc;

	i = 0;
	str = (unsigned char *) s;
	cc = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
