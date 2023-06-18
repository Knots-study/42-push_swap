/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:37 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 10:55:51 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../../deque/include/deque.h"

void	swap(Deque deque);
void	push(Deque to, Deque from);
void	rotate(Deque deque);
void	reverse_rotate(Deque deque);

#endif
