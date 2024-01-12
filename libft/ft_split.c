/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:50:48 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:06:46 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
Parameters:
s: The string to be split.
c: The delimiter character.*/
#include "libft.h"

//check if character is separator
static int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}
//counts the number of substrings obtained by splitting the input string

static int	count_str(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((is_sep(str[i], sep) == 0) && (i == 0 || is_sep(str[i - 1], sep)))
			count++;
		i++;
	}
	return (count);
}
//determine the length of the words

static int	count_strlen(char const *str, char sep, int n_str)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	len = 0;
	count = -1;
	while (str[i])
	{
		if (!is_sep(str[i], sep) && (i == 0 || is_sep(str[i - 1], sep)))
			count++;
		if (n_str == count && !is_sep(str[i], sep))
			len++;
		i++;
	}
	return (len);
}

static char	*save_str(char const *str, char sep, int n_str)
{
	int		i;
	int		j;
	int		count;
	char	*result;

	i = 0;
	j = 0;
	count = -1;
	result = (char *)malloc((count_strlen(str, sep, n_str) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], sep) && (i == 0 || is_sep(str[i - 1], sep)))
			count++;
		if (n_str == count && !is_sep(str[i], sep))
			result[j++] = str[i];
		i++;
	}
	result[j] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	size = count_str(s, c);
	result = (char **)malloc((size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[size] = 0;
	i = 0;
	while (i < size)
	{
		result[i] = save_str(s, c, i);
		if (!result[i])
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}
