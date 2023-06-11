/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_insert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:46:50 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 15:20:03 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_insert(t_bi_linklist list, int value, int pos)
{
	t_bi_linklist	*insert_pos
	t_bi_linklist	*elem;

	insert_pos = bi_linklist_search(list, pos);
	if (insert_pos == NULL)
		return (1);
	elem = (t_bi_linklist*)malloc(sizeof(t_bi_linklist));
	if (elem == NULL)
		return (1);
	elem->value = value;
	elem->next = insert_pos->next;
	elem->prev = insert_pos;
	insert_pos->next = elem;
	insert_pos->next->prev = elem;
	return (0);
}
