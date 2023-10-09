/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:44:28 by knottey           #+#    #+#             */
/*   Updated: 2023/10/10 08:41:47 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	push_swap(int argc, char *argv[])
{
	int	num;
	int	idx;
	Deque	stack_a;
	//Deque	stack_b;

	stack_a = deque_create();
	//stack_b = deque_create();
	idx = 1;
	while (idx < argc)
	{
		num = ft_atoi(argv[idx]);
		deque_push_back(stack_a, num);
		idx++;
	}
}