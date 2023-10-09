/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_remove.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:59:40 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 18:59:11 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bidirect_int_linklist.h"

int	bi_linklist_remove_elem(BI_Linklist elem)
{
	if (elem->next == elem)
		return (false);
	elem->next->prev = elem->prev;
	elem->prev->next = elem->next;
	free(elem);
	return (true);
}

int	bi_linklist_remove_elem_by_value(BI_Linklist list, int value)
{
	BI_Linklist	p;
	BI_Linklist	prev;
	int			count;

	p = list->next;
	prev = list;
	count = 0;
	while (p != list)
	{
		if (p->value == value)
		{
			p->next->prev = prev;
			prev->next = p->next;
			free(p);
			p = prev->next;
			count++;
		}
		else
		{
			prev = p;
			p = p->next;
		}
	}
	return (count);
}
