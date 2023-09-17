/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_less7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 02:31:14 by knottey           #+#    #+#             */
/*   Updated: 2023/09/17 20:31:45 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	dfs(Deque stack_a, Deque stack_b, int turn, int ans)
{
	int	command;

	if (turn >= 12)//終了条件
		return ;
	if (stack_b->list->value == -1 && is_sorted(stack_a))
	{
		ans = max(ans, turn);
		return ;
	}
	command = 0;
	while(command <= 10)
	{
		sort_arg6(*stack_a, *stack_b, command);
		dfs(stack_a, stack_b, turn + 1, ans);
		command++;
	}
}

void	sort_arg6(Deque *stack_a, Deque *stack_b, int command)
{
	if (command == 0)
		push_a(*stack_a, *stack_b);
	if (command == 1)
		push_b(*stack_a, *stack_b);
	if (command == 2)
		reverse_rotate_a(*stack_a);
	if (command == 3)
		reverse_rotate_b(*stack_b);
	if (command == 4)
		reverse_rotate_ab(*stack_a, *stack_b);
	if (command == 5)
		rotate_a(*stack_a);
	if (command == 6)
		rotate_b(*stack_b);
	if (command == 7)
		rotate_ab(*stack_a, *stack_b);
	if (command == 8)
		swap_a(*stack_a);
	if (command == 9)
		swap_b(*stack_b);
	if (command == 10)
		swap_ab(*stack_a, *stack_b);
}

