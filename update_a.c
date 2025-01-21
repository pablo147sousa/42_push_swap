/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:53:29 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/21 17:20:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_a(t_node *a, t_node *b, t_node **target, long *best_id)
{
	if (b->value < a->value && b->value > *best_id)
	{
		*best_id = b->value;
		*target = b;
	}
}

static void	set_a(t_stack *a, t_stack *b)
{
	t_node	*temp_a;
	t_node	*temp_b;
	t_node	*target;
	long	best_id;

	temp_a = a->head;
	while (1)
	{
		best_id = LONG_MIN;
		temp_b = b->head;
		while (1)
		{
			ft_set_a(temp_a, temp_b, &target, &best_id);
			if (temp_b == b->tail)
				break ;
			temp_b = temp_b->next;
		}
		if (best_id == LONG_MIN)
			temp_a->target = is_max(b);
		else
			temp_a->target = target;
		if (temp_a == a->tail)
			break ;
		temp_a = temp_a->next;
	}
}

static void	cost_a(t_stack *a, t_stack *b)
{
	t_node	*temp;

	temp = a->head;
	while (1)
	{
		temp->moves = temp->id;
		if (temp->rev)
			temp->moves = a->size - temp->id;
		if (temp->target->rev)
			temp->moves += b->size - temp->target->id;
		else
			temp->moves += temp->target->id;
		if (temp == a->tail)
			break ;
		temp = temp->next;
	}
}

void	move_a(t_stack *a, t_stack *b)
{
	t_node	*node;

	node = get_cheap(a);
	if (node->rev && node->target->rev)
		rot_both(a, b, node, -1);
	else if (!(node->rev) && !(node->target->rev))
		rot_both(a, b, node, 1);
	set_head(a, node, 'a');
	set_head(b, node->target, 'b');
	node->best = false;
	push(b, a, 'b');
}

void	update_a(t_stack *a, t_stack *b)
{
	ft_index(a);
	ft_index(b);
	set_a(a, b);
	cost_a(a, b);
	ft_cheap(a);
}
