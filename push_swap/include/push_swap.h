/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:37 by knottey           #+#    #+#             */
/*   Updated: 2023/06/14 09:48:56 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

#include "deque.h"

void	swap(Deque deque);
void	push(Deque to, Deque from);
void	rotate(Deque deque);
void	reverse_rotate(Deque deque);

#endif