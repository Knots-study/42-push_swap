/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_get.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:00:54 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:16:09 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bidirect_int_linklist.h"

BI_Linklist bi_linklist_get_head(BI_Linklist list)
{
	return (list->next);
}

BI_Linklist bi_linklist_get_tail(BI_Linklist list)
{
	return (list->prev);
}
