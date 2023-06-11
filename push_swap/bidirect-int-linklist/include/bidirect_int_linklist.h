/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirect_int_linklist.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:02 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 13:50:52 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIDIRECT_INT_LINKLIST_H
# define BIDIRECT_INT_LINKLIST_H

typedef struct s_bidirect_int_link_list{
	int									value;
	struct s_bidirect_int_link_list*	next;
	struct s_bidirect_int_link_list*	prev;
}	t_bi_linklist;

#endif