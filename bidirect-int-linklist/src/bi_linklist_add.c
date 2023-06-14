/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:52:07 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 08:40:09 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_add_front(t_bi_linklist list, int value)
{
	BI_Linklist	elem;

	elem = (BI_Linklist)xmalloc(sizeof(t_bi_linklist));
	elem->value = value;
	elem->next = list->next;
	elem->prev = list;
	elem->next->prev = elem;
	list->next = elem;
	return (true);
}

int	bi_linklist_add_tail(t_bi_linklist list, int value)
{
	BI_Linklist	tail;
	BI_Linklist	elem;

	tail = bi_linklist_get_tail(list);
	elem = (BI_Linklist)xmalloc(sizeof(t_bi_linklist));
	elem->value = value;
	elem->next = list;
	elem->prev = tail;
	tail->next = elem;
	list->prev = elem;
	return (true);
}
