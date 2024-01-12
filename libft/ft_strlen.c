/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:40:28 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:18:11 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Computes the length of a string.
Parameters:
const char *s: The input string.*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
