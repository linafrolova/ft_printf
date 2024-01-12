/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:25:06 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:24:28 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares two blocks of memory.
Parameters:
const void *s1: The first memory block.
const void *s2: The second memory block.
size_t n: Number of bytes to compare.*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	count = 0;
	if (n == 0)
		return (0);
	while ((str1[count] == str2[count]) && (count < n - 1))
		count++;
	return (str1[count] - str2[count]);
}
