/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:26:58 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 18:20:15 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push(Deque to, Deque from)
{
	int elem;

	elem = deque_pop_back(from);
	deque_push_back(to, elem);
}

void	push_a(Deque to, Deque from)
{
	push(to, from);
	ft_putstr("pa\n");
}

void	push_b(Deque to, Deque from)
{
	push(to, from);
	ft_putstr("pb\n");
}
