/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:24:39 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:14:58 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Determines if a character is an alphabetic character.
Parameters:
int c: The character to be checked.*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
