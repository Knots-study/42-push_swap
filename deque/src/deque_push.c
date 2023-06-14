/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:10 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 09:10:56 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	deque_push_front(Deque deque, int value)
{
	int	ret;

	ret = bi_linklist_add_front(deque->list, value);
	if (!ret)
		exit(EXIT_FAILURE);
}

void	deque_push_back(Deque deque, int value)
{
	int	ret;

	ret = bi_linklist_add_tail(deque->list, value);
	if (!ret)
		exit(EXIT_FAILURE);
}