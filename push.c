/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:18:33 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/08 16:12:37 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_link(t_node *node, t_stack *stk)
{
	if (!stk)
		return (0);
	ft_add_front(stk, node);
	if (stk->tail && stk->tail != node)
	{
		stk->tail->next = node;
		node->prev = stk->tail;
	}
	if (!stk->head->next)
	{
		stk->head->next = NULL;
		stk->head->prev = NULL;
	}
	stk->size += 1;
	return (1);
}

static void	ft_push(t_stack *dst, t_stack *src)
{
	t_node	*temp;

	temp = src->head;
	if (src->size == 1)
	{
		src->head = NULL;
		src->tail = NULL;
	}
	else
	{
		src->head = temp->next;
		src->tail->next = src->head;
		src->head->prev = src->tail;
	}
	temp->next = NULL;
	temp->prev = NULL;
	if (ft_link(temp, dst))
		src->size -= 1;
}

void	push(t_stack *dst, t_stack *src, char target)
{
	if (!src || !src->head)
		return ;
	ft_push(dst, src);
	ft_printf("p%c\n", target);
}
