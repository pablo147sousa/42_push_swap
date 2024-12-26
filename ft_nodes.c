/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:47:04 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/26 16:28:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_newnode(int content)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
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

t_stack	*ft_fill_stk(int *src)
{
	t_stack		*stk;
	int			*temp;

	temp = src;
	stk = malloc(sizeof(t_stack));
	if (!stk)
		return (NULL);
	stk->head = NULL;
	stk->tail = NULL;
	while (*temp)
	{
		ft_add_front(stk, ft_newnode(*temp));
		temp++;
	}
	stk->head->prev = stk->tail;
	stk->tail->next = stk->head;
	return (free(src), stk);
}
