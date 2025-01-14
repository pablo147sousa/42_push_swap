/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:53:29 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/15 16:55:26 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set(t_node *a, t_node *b, t_node **target, long *best_id)
{
	if (b->value < a->value && b->value > *best_id)
	{
		*best_id = b->value;
		*target = b;
	}
}

void	set_a(t_stack *a, t_stack *b)
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
			ft_set(temp_a, temp_b, &target, &best_id);
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

// void	set_b(t_stack *a, t_stack *b)
// {
// }

void	big_sort(t_stack *a, t_stack *b)
{
	ft_printf("%d\n", a->head->value);
	ft_printf("%d\n", b->head->value);
	return ;
}
