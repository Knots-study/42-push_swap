/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:54:45 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 09:09:57 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

bool	deque_is_empty(Deque deque)
{
	if (bi_linklist_size(deque->list) == 0)
		return (true);
	else
		return (false);
}