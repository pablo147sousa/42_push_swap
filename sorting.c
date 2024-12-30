/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:49:44 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/30 14:43:42 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stk)
{
	if (stk->head->next->value > stk->head->value
		&& stk->head->value > stk->tail->value)
		return (rot_a(stk, -1));
	if (stk->head->value < stk->head->next->value
		&& stk->head->next->value > stk->tail->value)
		swap_a(stk);
	while (stk->head->value > stk->tail->value)
		rot_a(stk, 1);
	if (stk->head->value > stk->head->next->value
		&& stk->head->value < stk->tail->value)
		swap_a(stk);
}
