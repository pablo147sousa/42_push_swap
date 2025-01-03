/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:18:33 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 15:48:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_link(t_node *node, t_stack *stk)
{
	if (!stk)
		return ;
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
}

static void	ft_push(t_stack *dst, t_stack *src)
{
	t_node	*temp;

	temp = src->head;
	if (temp == src->tail)
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
	ft_link(temp, dst);
}

void	push(t_stack *dst, t_stack *src, char target)
{
	if (!src || !src->head)
		return ;
	ft_push(dst, src);
	ft_printf("p%c\n", target);
}
