/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:53:54 by knottey           #+#    #+#             */
/*   Updated: 2023/09/16 18:58:42 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bidirect_int_linklist.h"

void	bi_linklist_delete(BI_Linklist list)
{
	bi_linklist_clear(list);
	free(list);
}
