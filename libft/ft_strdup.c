/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:49:13 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:28:01 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Duplicates a string by dynamically allocating memory
and copying the input string into it.
Parameters:
const char *s: The string to be duplicated.*/
static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = ft_strlen(s) + 1;
	dest = (char *)malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, (char *) s));
}
