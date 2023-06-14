/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_insert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:46:50 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 08:43:06 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_insert(t_bi_linklist list, int value, int pos)
{
	BI_Linklist p;
	BI_Linklist elem;

	p = bi_linklist_search(list, pos);
	if (p == NULL)
		return (false);
	elem = (BI_Linklist)xmalloc(sizeof(t_bi_linklist));
	elem->value = value;
	elem->next = p->next;
	elem->prev = p;
	p->next = elem;
	p->next->prev = elem;
	return (true);
}
