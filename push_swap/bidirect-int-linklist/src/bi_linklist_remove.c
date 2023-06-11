/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_remove.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:59:40 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:18:23 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_remove_elem(t_bi_linklist list, int value, int pos)
{
	if (elem->next == elem)
		return (1);
	elem->next->prev = elem->prev;
	elem->prev->next = elem->next;
	free(elem);
	return (0);
}

int	bi_linklist_remove_elem_by_value(t_bi_linklist list, int value, int pos)
{
	t_bi_linklist	*p;
	t_bi_linklist	*prev;
	int				count;

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
