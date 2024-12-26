/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:29:14 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/26 16:05:46 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stk)
{
	t_node	*temp;
	t_node	*new_head;

	if (!stk || !stk->head || !stk->head->next)
		return ;
	temp = stk->head;
	new_head = stk->head->next;
	new_head->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = new_head;
	temp->next = new_head->next;
	if (new_head->next)
		new_head->next->prev = temp;
	new_head->next = temp;
	temp->prev = new_head;
	stk->head = new_head;
}

void	swap_a(t_stack *stk)
{
	swap(stk);
	ft_printf("sa\n");
}

void	swap_b(t_stack *stk)
{
	swap(stk);
	ft_printf("sb\n");
}

void swap_ss(t_stack *stk_a, t_stack *stk_b)
{
	swap(stk_a);
	swap(stk_b);
	ft_printf("ss\n");
}
