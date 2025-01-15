/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finders.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:55:22 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/14 14:45:26 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*is_min(t_stack *s)
{
	t_node	*temp;
	t_node	*min;

	temp = s->head;
	min = temp;
	while (temp != s->tail)
	{
		if (temp->value < min->value)
			min = temp;
		temp = temp->next;
	}
	if (temp->value < min->value)
		min = temp;
	return (min);
}

t_node	*is_max(t_stack *s)
{
	t_node	*temp;
	t_node	*max;

	temp = s->head;
	max = temp;
	while (temp != s->tail)
	{
		if (temp->value > max->value)
			max = temp;
		temp = temp->next;
	}
	if (temp->value > max->value)
		max = temp;
	return (max);
}

int	ft_rot(t_stack *s, t_node *node)
{
	t_node	*temp;
	int		moves;

	if (!s || !s->head)
		return (-1);
	temp = s->head;
	moves = 0;
	while (temp != s->tail)
	{
		if (temp == node)
			return (moves);
		else
			moves++;
		temp = temp->next;
	}
	return (moves);
}

int	r_rot(t_stack *s, t_node *node)
{
	t_node	*temp;
	int		moves;

	if (!s || !s->head)
		return (-1);
	temp = s->head;
	moves = 0;
	while (temp != s->head->next)
	{
		if (temp == node)
			return (moves);
		else
			moves++;
		temp = temp->prev;
	}
	return (moves);
}
