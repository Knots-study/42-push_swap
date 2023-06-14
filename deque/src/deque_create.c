/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:53:44 by knottey           #+#    #+#             */
/*   Updated: 2023/06/12 12:42:49 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

Deque	deque_create(void)
{
	t_deque	*deque;

	deque = (t_deque *)malloc(sizeof(t_deque));
	if (deque == NULL)
		return (NULL);
	deque->list = bi_linklist_create(void);
	return (deque);
}