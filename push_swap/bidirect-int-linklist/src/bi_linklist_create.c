/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:53:01 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:24:07 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

t_bi_linklist	*bi_linklist_create(void)
{
	t_bi_linklist	*head;

	head = (t_bi_linklist *)malloc(sizeof(t_bi_linklist));
	if (head == NULL)
		return (1);
	head->value = 0;
	head->next = head;
	head->prev = head;
	return (0);
}
