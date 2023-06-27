/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:21:43 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 18:19:12 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rotate(Deque deque)
{
	int	elem;

	elem = deque_pop_front(deque);
	deque_push_back(deque, elem);
}

void	rotate_a(Deque deque_a)
{
	rotate(deque_a);
	ft_putstr("ra\n");
}

void	rotate_b(Deque deque_b)
{
	rotate(deque_b);
	ft_putstr("rb\n");
}

void	rotate_ab(Deque deque_a, Deque deque_b)
{
	rotate(deque_a);
	rotate(deque_b);
	ft_putstr("rr\n");
}