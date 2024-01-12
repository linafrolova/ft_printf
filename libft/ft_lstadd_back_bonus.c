/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:08:28 by lfrolova          #+#    #+#             */
/*   Updated: 2023/11/24 20:19:30 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node ’new’ at the end of the list.
Parameters:
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
