/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:47 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 09:08:44 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_size(BI_Linklist list)
{
	BI_Linklist	p;
	int			size;

	p = list->next;
	size = 0;
	while (p != list)
	{
		size++;
		p = p->next;
	}
	return (cousizent);
}
