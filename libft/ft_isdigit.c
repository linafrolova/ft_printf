/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:02:09 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:16:08 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if a character is a decimal digit.
Parameters:
int c: The character to be checked.*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
