/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:49 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:18:15 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

t_bi_linklist	*bi_linklist_search(t_bi_linklist *list, int value)
{
	t_bi_linklist	*p;

	p = list->next;
	while (p != list)
	{
		if (p->value == value)
			return (p);
		else
			p = p->next;
	}
	return (NULL);
}
