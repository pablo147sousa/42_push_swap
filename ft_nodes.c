/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:47:04 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/10 15:18:13 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_newnode(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->moves = 0;
	node->id = -1;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	ft_add_front(t_stack *stack, t_node *new)
{
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		new->next = stack->head;
		stack->head->prev = new;
		stack->head = new;
	}
}

t_stack	*ft_fill_stk(int *src, int size)
{
	t_stack		*stk;

	stk = malloc(sizeof(t_stack));
	if (!stk)
		return (NULL);
	stk->head = NULL;
	stk->tail = NULL;
	stk->size = 0;
	while (--size >= 0)
	{
		ft_add_front(stk, ft_newnode(src[size]));
		stk->size += 1;
	}
	stk->head->prev = stk->tail;
	stk->tail->next = stk->head;
	return (stk);
}
