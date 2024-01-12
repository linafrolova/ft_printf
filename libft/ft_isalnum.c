/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:40:28 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:16:30 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifies if a character is an alphanumeric character.
Parameters:
int c: The character to be checked.*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
