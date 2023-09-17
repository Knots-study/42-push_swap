/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_over6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:31:56 by knottey           #+#    #+#             */
/*   Updated: 2023/09/17 20:31:58 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_over6(t_dlst *a, t_dlst *b, t_ps *ps)
{
	long	size;
    
    // 半々にわけます。 A:26~50, B:1~25
	half_set(a, b, ps);

	while (ps->awant != ps->size)
	{
		b_settle_top(a, b, ps);

        // Bの要素が4個以下になるまで、Bを半分にわけます。
        // A:13~24 + 25~50              B:1~12 
        // A:7~12 + 13~24 + 25~50       B:1~6 
        // A:4~6 + 7~12 + 13~24 + 25~50 B:1~3 
		while ((size = dlst_size(b)) > SORTSIZE)
			b_quick_sort(a, b, ps, size);
		if (size)
			allsort(a, b, ps, size);

        // Aは、3個、6個、12個、と部分でまとまった並びになっています。
        // まとまりが4個以下ならソート順に確定。
        // 5個以上なら、全部Bにうつします。
		while ((size = search_a_size(a, ps)) && size <= SORTSIZE)
			allsort(a, b, ps, size);
		if (size)
			a_quick_sort(a, b, ps, size);
	}
}