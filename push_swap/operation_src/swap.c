/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:31:19 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 18:19:15 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(Deque deque)
{
	int	first_elem;
	int	second_elem;

	first_elem = deque_pop_back(deque);
	second_elem = deque_pop_back(deque);
	deque_push_back(deque, second_elem);
	deque_push_back(deque, first_elem);
}

void	swap_a(Deque deque_a)
{
	swap(deque_a);
	ft_putstr("sa\n");
}

void	swap_b(Deque deque_b)
{
	swap(deque_b);
	ft_putstr("sb\n");
}

void	swap_ab(Deque deque_a, Deque deque_b)
{
	swap(deque_a);
	swap(deque_b);
	ft_putstr("ss\n");
}