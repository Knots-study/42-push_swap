/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:46:00 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 19:01:11 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

long long int	ft_atoi(const char *str)
{
	long long int	num;
	int				sign;
	size_t			idx;

	num = 0;
	sign = 1;
	idx = 0;
	if (str[idx] == '-')
	{
		sign *= -1;
		idx++;
	}
	else if (str[idx] == '+')
		idx++;
	while (ft_isdigit(str[idx]))
	{
		num = (num * 10) + (str[idx] - '0');
		idx++;
	}
	return (num * sign);
}

void	ft_putstr(const char *str)
{
	size_t	idx;

	idx = 0;
	while (str[idx])
	{
		write(STDOUT_FILENO, &str[idx], 1);
		idx++;
	}
}

int	is_sorted(Deque deque)
{
	t_bi_linklist	list;

	list = deque->list;
	while (deque->list->next != list)
	{
		if (deque->list->value > deque->list->next->value)
			return (0);
		deque->list = deque->list->next;
	}
	return (1);
}