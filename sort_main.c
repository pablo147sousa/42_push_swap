/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:32:24 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/21 17:21:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cheap(t_stack *s)
{
	long	value;
	t_node	*best;
	t_node	*temp;

	if (!s)
		return ;
	value = LONG_MAX;
	temp = s->head;
	while (1)
	{
		if (temp->moves < value)
		{
			value = temp->moves;
			best = temp;
		}
		if (temp == s->tail)
			break ;
		temp = temp->next;
	}
	best->best = true;
}

t_node	*get_cheap(t_stack *s)
{
	t_node	*target;
	t_node	*temp;

	temp = s->head;
	target = NULL;
	while (1)
	{
		if (temp->best)
			target = temp;
		if (temp == s->tail)
			break ;
		temp = temp->next;
	}
	return (target);
}

void	big_sort(t_stack *a, t_stack *b)
{
	t_node	*node;
	int		way;

	push(b, a, 'b');
	while (a->size > 3 && !is_sorted(a))
	{
		update_a(a, b);
		move_a(a, b);
	}
	sort_3(a, 'a');
	while (b->size != 0)
	{
		update_b(a, b);
		move_b(a, b);
	}
	node = is_min(a);
	way = r_rot(a, node) - ft_rot(a, node);
	while (a->head != node)
		rot(a, way, 'a');
}

void	sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sort_2(a, 'a');
	if (a->size == 3)
		sort_3(a, 'a');
	if (a->size == 4)
		sort_4(a, b);
	if (a->size == 5)
		sort_5(a, b);
	if (a->size > 5)
		big_sort(a, b);
}
