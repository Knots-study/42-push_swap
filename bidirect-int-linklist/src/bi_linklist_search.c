/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:49 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:08:12 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bidirect_int_linklist.h"

BI_Linklist bi_linklist_search(BI_Linklist list, int value)
{
	BI_Linklist p;

	p = list->next;
	while (p != list)
	{
		if (p->value == value)
			return (p);
		p = p->next;
	}
	return (NULL);
}
