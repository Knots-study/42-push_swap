/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_linklist_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:29:10 by knottey           #+#    #+#             */
/*   Updated: 2023/06/18 11:08:20 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bidirect_int_linklist.h"

void	*xmalloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (p == NULL)
		exit(EXIT_FAILURE);
	return (p);
}