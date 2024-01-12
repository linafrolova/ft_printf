/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:47:11 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 21:01:34 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Counts the number of nodes in a list.
Parameters:
lst: The beginning of the list.*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tmp;

	counter = 0;
	tmp = lst;
	if (!tmp)
		return (0);
	while (tmp)
	{
		counter ++;
		tmp = tmp -> next;
	}
	return (counter);
}
