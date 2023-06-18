/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:53:18 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:06:53 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/deque.h"

int	deque_pop_front(Deque deque)
{
	BI_Linklist	elem;
	int			value;
	int 		ret;

	elem = bi_linklist_get_head(deque->list);
	value = elem->value;
	ret = bi_linklist_remove_elem(elem);
	if (!ret)
		exit(EXIT_FAILURE);
	return (value);
}

int	deque_pop_back(Deque deque)
{
	BI_Linklist	elem;
	int 		value;
	int			ret;

	elem = bi_linklist_get_tail(deque->list);
	value = elem->value;
	ret = bi_linklist_remove_elem(elem);
	if (!ret)
		exit(EXIT_FAILURE);
	return (value);
}