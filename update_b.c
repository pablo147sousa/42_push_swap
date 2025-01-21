/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:11:06 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/21 15:28:55 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_b(t_node *a, t_node *b, t_node **target, long *best_id)
{
	if (b->value < a->value && a->value < *best_id)
	{
		*best_id = a->value;
		*target = a;
	}
}

static void	set_b(t_stack *a, t_stack *b)
{
	t_node	*temp_b;
	t_node	*temp_a;
	t_node	*target;
	long	best_id;

	temp_b = b->head;
	while (1)
	{
		best_id = LONG_MAX;
		temp_a = a->head;
		while (1)
		{
			ft_set_b(temp_a, temp_b, &target, &best_id);
			if (temp_a == a->tail)
				break ;
			temp_a = temp_a->next;
		}
		if (best_id == LONG_MAX)
			temp_b->target = is_min(a);
		else
			temp_b->target = target;
		if (temp_b == b->tail)
			break ;
		temp_b = temp_b->next;
	}
}

void	move_b(t_stack *a, t_stack *b)
{
	set_head(a, b->head->target, 'a');
	push(a, b, 'a');
}

void	update_b(t_stack *a, t_stack *b)
{
	ft_index(a);
	ft_index(b);
	set_b(a, b);
}
