/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:40:01 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:17:42 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Tests if a character is a printable character.
Parameters:
int c: The character to be checked.*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
