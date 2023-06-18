/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirect_int_linklist.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:02 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:24:22 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIDIRECT_INT_LINKLIST_H
# define BIDIRECT_INT_LINKLIST_H

# include <stdlib.h>
# include <stdbool.h>

typedef struct s_bidirect_int_link_list{
	int								value;
	struct s_bidirect_int_link_list	*next;
	struct s_bidirect_int_link_list	*prev;
}	t_bi_linklist;

typedef t_bi_linklist *BI_Linklist; 

int			bi_linklist_add_front(BI_Linklist list, int value);
int			bi_linklist_add_tail(BI_Linklist list, int value);
void		bi_linklist_clear(BI_Linklist list);
BI_Linklist bi_linklist_create(void);
void		bi_linklist_delete(BI_Linklist list);
BI_Linklist bi_linklist_get_head(BI_Linklist list);
BI_Linklist bi_linklist_get_tail(BI_Linklist list);
int			bi_linklist_insert(BI_Linklist list, int value, int pos);
int			bi_linklist_remove_elem(BI_Linklist list);
int			bi_linklist_remove_elem_by_value(BI_Linklist list, int value);
BI_Linklist bi_linklist_search(BI_Linklist list, int value);
int			bi_linklist_size(BI_Linklist list);
void		*xmalloc(size_t size);

#endif