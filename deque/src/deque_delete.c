/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:54:17 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 19:02:05 by ykaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/deque.h"

void	deque_delete(Deque deque)
{
	bi_linklist_delete(deque->list);
	free(deque);
}
