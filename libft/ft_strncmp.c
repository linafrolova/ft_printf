/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:16:37 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:23:29 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares the first n characters of two strings.
Parameters:
const char *s1: The first string.
const char *s2: The second string.
size_t n: Number of characters to compare.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while ((s1[count] == s2[count]) && (s1[count] != '\0' && s2[count] != '\0')
		&& (count < n - 1))
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
