/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:49:44 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/03 15:16:29 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *s, char target)
{
	if (s->head->value > s->tail->value)
		swap(s, target);
}

void	sort_3(t_stack *s, char target)
{
	t_node	*mid;

	mid = s->head->next;
	if (s->head->value < mid->value && mid->value < s->tail->value)
		return ;
	if (s->head->value > mid->value && s->head->value < s->tail->value)
		return swap(s, target);
	if (s->head->value > mid->value && mid->value > s->tail->value)
		return (swap(s, target), rot(s, -1, target));
	if (s->head->value < s->tail->value && s->tail->value < mid->value)
		swap(s, target);
	rot(s, (s->head->value - mid->value), target);
}

// void	sort_5(t_stack *a, t_stack *b)
// {
	
	
// }