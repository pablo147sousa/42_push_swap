/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:49:44 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/03 13:41:58 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *s, char target)
{
	t_node	*mid;

	mid = s->head->next;
	if (s->head->value > mid->value)
		swap(s, target);
	if (s->head->next->value > s->tail->value
		&& s->head->value < s->tail->value)
		swap(s, target);
	if ((mid == s->head || mid == s->tail) && s->head->value > s->tail->value)
		rot_a(s ,(s->head->value - s->head->next->value));
}

// void	sort_5(t_stack *a, t_stack *b)
// {
	
	
// }