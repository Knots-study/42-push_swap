/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:47 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:16:44 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

int	bi_linklist_size(t_bi_linklist	*list)
{
	t_bi_linklist	*p;
	int				count;

	p = list->next;
	count = 0;
	while (p != list)
	{
		count++;
		p = p->next;
	}
	return (count);
}
