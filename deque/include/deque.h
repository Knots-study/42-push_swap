/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:05 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 16:22:41 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

# include	"../../bidirect-int-linklist/include/bidirect_int_linklist.h"

typedef struct s_deque{
	t_bi_linklist	*list;
}	t_deque;

typedef t_deque	*Deque;

Deque	deque_create(void);
void	deque_delete(Deque deque);
int		deque_pop_front(Deque deque);
int		deque_pop_back(Deque deque);
void	deque_push_front(Deque deque, int value);
void	deque_push_back(Deque deque, int value);
bool	deque_is_empty(Deque deque);

#endif