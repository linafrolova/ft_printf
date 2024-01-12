/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:09:17 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:05:51 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
*/
#include "libft.h"

int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*make_string(int i, int j, int len)
{
	char	*result;

	if (i > j)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
	}
	else
	{
		result = malloc((len + 2) * sizeof(char));
		if (!result)
			return (NULL);
	}
	return (result);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		start;
	int		len;
	char	*result;

	if (!s1 || (!s1 && !set))
		return (0);
	if (!set)
		return ((char *) s1);
	i = 0;
	j = ft_strlen(s1) - 1;
	start = 0;
	while (is_in_set(s1[i], set) == 1)
		i++;
	while (is_in_set(s1[j], set) == 1)
		j--;
	len = j - i;
	result = make_string(i, j, len);
	if (!result)
		return (NULL);
	while (i <= j)
		result[start++] = s1[i++];
	result[start] = 0;
	return (result);
}
