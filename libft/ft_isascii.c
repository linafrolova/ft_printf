/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:24:29 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:17:02 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if a character is an ASCII character.
Parameters:
int c: The character to be checked.*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
