/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:46:01 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:28:12 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates and initializes a block of memory for an array of elements,
setting all bytes to zero.
Parameters:
size_t nmemb: Number of elements.
size_t size: Size of each element.*/
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (nmemb > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
