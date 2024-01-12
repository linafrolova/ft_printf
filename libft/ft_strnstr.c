/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:23:50 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:27:50 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates a substring within a string,
limiting the search to a specified number of characters.
Parameters:
const char *big: The string to be searched.
const char *little: The substring to search for.
size_t len: Maximum number of characters to search.*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (NULL);
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j]
			&& i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) big + i);
			j++;
		}
		i++;
	}
	return (0);
}
