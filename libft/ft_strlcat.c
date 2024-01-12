/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:57:33 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/25 17:39:47 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Concatenates a string to the end of another with a specified size.
Parameters:
char *dest: Destination string.
const char *src: Source string.
size_t size: Size of the destination buffer*/
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (!dest)
		destlen = 0;
	else
		destlen = ft_strlen(dest);
	if (destlen >= size)
	{
		destlen = size;
		return (destlen + srclen);
	}
	while (destlen + i < size - 1 && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
