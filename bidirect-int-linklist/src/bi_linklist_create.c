/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:53:01 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 08:42:31 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

BI_Linklist	bi_linklist_create(void)
{
	BI_Linklist	head;

	head = (BI_Linklist)xmalloc(sizeof(t_bi_linklist));
	head->value = 0;
	head->next = head;
	head->prev = head;
	return (head);
}
