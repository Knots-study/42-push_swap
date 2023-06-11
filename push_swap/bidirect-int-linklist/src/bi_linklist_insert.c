/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_insert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:46:50 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:24:20 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_insert(t_bi_linklist list, int value, int pos)
{
	t_bi_linklist	*p;
	t_bi_linklist	*elem;

	p = bi_linklist_search(list, pos);
	if (p == NULL)
		return (1);
	elem = (t_bi_linklist *)malloc(sizeof(t_bi_linklist));
	if (elem == NULL)
		return (1);
	elem->value = value;
	elem->next = p->next;
	elem->prev = p;
	p->next = elem;
	p->next->prev = elem;
	return (0);
}
