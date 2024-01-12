/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:43:28 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:22:16 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts an uppercase character to lowercase.
Parameters:
int c: Character to be converted.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
