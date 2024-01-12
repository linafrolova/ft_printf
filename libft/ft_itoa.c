/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:11:02 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/25 17:03:36 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
Parameters n: the integer to convert.*/

static int	int_len(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter ++;
	}
	if (nb == 0)
		counter++;
	while (nb > 0)
	{
		nb /= 10;
		counter ++;
	}
	return (counter);
}

static char	*get_str(long nb)
{
	char	*result;

	result = malloc((int_len(nb) + 1) * sizeof(char));
	return (result);
}

static char	*conversion(long nb, int i, char *result)
{
	while (nb != 0)
	{
		result[i] = ((nb % 10) + 48);
		nb = nb / 10;
		i--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nb;

	nb = n;
	len = int_len(nb);
	i = len - 1;
	result = get_str(nb);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	else
		result[0] = '0';
	result = conversion(nb, i, result);
	result[len] = 0;
	return (result);
}
