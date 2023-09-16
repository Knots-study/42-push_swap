/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:54:45 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 19:00:47 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/deque.h"

bool	deque_is_empty(Deque deque)
{
	if (bi_linklist_size(deque->list) == 0)
		return (true);
	else
		return (false);
}
