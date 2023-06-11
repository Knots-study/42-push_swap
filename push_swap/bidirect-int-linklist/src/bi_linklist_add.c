/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:52:07 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 14:50:22 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_add_front(t_bi_linklist list, int value)
{
	t_bi_linklist	*elem;

	elem = (t_bi_linklist*)malloc(sizeof(t_bi_linklist));
	if (elem == NULL)
		return (1);
	elem->value = value;
	elem->next = list->next;
	elem->prev = list;
	elem->next->prev = elem;
	list->next = elem;
	return (0);
}

int	bi_linklist_add_tail(t_bi_linklist list, int value)
{
	t_bi_linklist	*tail;
	t_bi_linklist	*elem;

	tail = bi_linklist_get_tail(list);
	elem = (t_bi_linklist*)malloc(sizeof(t_bi_linklist));
	if (elem == NULL)
		return (1);
	elem->value = value;
	elem->next = list;
	elem->prev = tail;
	tail->next = elem;
	list->prev = elem;
	return (0);
}
int	bi_linklist_insert(t_bi_linklist list, int value, int pos)
{
	
}