/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:53:54 by knottey           #+#    #+#             */
/*   Updated: 2023/06/11 15:54:07 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bidirect_int_linklist.h"

void	bi_linklist_delete(t_bi_linklist *list)
{
	bi_linklist_clear(list);
	free(list)
}