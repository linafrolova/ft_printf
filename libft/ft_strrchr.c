/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:44:38 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:23:04 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the last occurrence of a character in a string.
Parameters:
const char *s: The input string.
int c: The character to search for.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*result;

	i = 0;
	result = NULL;
	cc = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			result = (char *) s + i;
		i++;
	}
	if (cc == '\0')
		return ((char *) s + i);
	return (result);
}
