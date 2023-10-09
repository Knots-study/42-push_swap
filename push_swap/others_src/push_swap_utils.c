/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:46:00 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 19:01:11 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(Deque deque)
{
	t_bi_linklist	*list;

	list = deque->list;
	while (deque->list->next != list)
	{
		if (deque->list->value > deque->list->next->value)
			return (0);
		deque->list = deque->list->next;
	}
	return (1);
}