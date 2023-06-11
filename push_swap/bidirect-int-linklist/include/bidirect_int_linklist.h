/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirect_int_linklist.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:02 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 15:26:07 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIDIRECT_INT_LINKLIST_H
# define BIDIRECT_INT_LINKLIST_H

typedef struct s_bidirect_int_link_list{
	int									value;
	struct s_bidirect_int_link_list*	next;
	struct s_bidirect_int_link_list*	prev;
}	t_bi_linklist;

int				bi_linklist_add_front(t_bi_linklist list, int value);
int				bi_linklist_add_tail(t_bi_linklist list, int value);
t_bi_linklist	*bi_linklist_create(void);
void			bi_linklist_delete(t_bi_linklist *list);
t_bi_linklist	*bi_linklist_get_front(t_bi_linklist list);
t_bi_linklist	*bi_linklist_get_tail(t_bi_linklist list);
int				bi_linklist_insert(t_bi_linklist list, int value, int pos);

#endif