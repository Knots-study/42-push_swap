/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_get.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:54 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 16:20:06 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

t_bi_linklist	*bi_linklist_get_front(t_bi_linklist list)
{
	return (list->next);
}

t_bi_linklist	*bi_linklist_get_tail(t_bi_linklist list)
{
	return (list->prev);
}
