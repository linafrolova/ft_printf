/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:43:25 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 22:26:33 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts an uppercase character to lowercase.
Parameters:
int c: Character to be converted.*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
