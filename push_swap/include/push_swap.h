/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:37 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 16:22:35 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../deque/include/deque.h"

long long int	ft_atoi(const char *str);
void			ft_putstr(const char *str);
int				is_sorted(Deque deque);
void			push_swap(int argc, char *argv[]);
void			swap_a(Deque deque_a);
void			swap_b(Deque deque_b);
void			swap_ab(Deque deque_a, Deque deque_b);
void			push_a(Deque to, Deque from);
void			push_b(Deque to, Deque from);
void			rotate_a(Deque deque_a);
void			rotate_b(Deque deque_b);
void			rotate_ab(Deque deque_a, Deque deque_b);
void			reverse_rotate_a(Deque deque_a);
void			reverse_rotate_b(Deque deque_b);
void			reverse_rotate_ab(Deque deque_a, Deque deque_b);

#endif
