/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_clear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:53:24 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:21:27 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

void	bi_linklist_clear(t_bi_linklist *list)
{
	t_bi_linklist	*p;
	t_bi_linklist	*tmp;

	p = list->next;
	while (p != list)
	{
		tmp = p->next;
		free(p)
		p = tmp;
	}
	list->next = list;
	list->prev = list;
}
