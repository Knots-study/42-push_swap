/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:54:17 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:06:49 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/deque.h"

void	deque_delete(Deque deque)
{
    bi_linklist_delete(deque->list);
    free(deque);
}