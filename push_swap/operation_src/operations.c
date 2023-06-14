/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:47:17 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 09:47:19 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(Deque deque)
{
	int	first_elem;
	int	second_elem;

	first_elem = deque_pop_back(deque);
	second_elem = deque_pop_back(deque);
	deque_push_back(deque, second_elem);
	deque_push_back(deque, first_elem);
}

void	push(Deque to, Deque from)
{
	int elem;

	elem = deque_pop_back(from);
	deque_push_back(to, elem);
}

void	rotate(Deque deque)
{
	int	elem;

	elem = deque_pop_front(deque);
	deque_push_back(deque, elem);
}

void	reverse_rotate(Deque deque)
{
	int	elem;

	elem = deque_pop_back(deque);
	deque_push_front(deque, elem);
}