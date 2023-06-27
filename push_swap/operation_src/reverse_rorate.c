/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rorate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:29:32 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 18:19:08 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate(Deque deque)
{
	int	elem;

	elem = deque_pop_back(deque);
	deque_push_front(deque, elem);
}

void	reverse_rotate_a(Deque deque_a)
{
	reverse_rotate(deque_a);
	ft_putstr("rra\n");
}

void	reverse_rotate_b(Deque deque_b)
{
	reverse_rotate(deque_b);
	ft_putstr("rrb\n");
}

void	reverse_rotate_ab(Deque deque_a, Deque deque_b)
{
	reverse_rotate(deque_a);
	reverse_rotate(deque_b);
	ft_putstr("rrr\n");
}