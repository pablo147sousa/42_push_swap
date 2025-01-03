/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:29:14 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/03 13:32:15 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack *stk)
{
	t_node	*temp;
	t_node	*new_head;

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

void	swap(t_stack *stk, char target)
{
	if (!stk || !stk->head || !stk->head->next)
		return ;
	ft_swap(stk);
	ft_printf("s%c\n", target);
}

void	swap_ss(t_stack *stk_a, t_stack *stk_b)
{
	if (!stk_a || !stk_a->head || !stk_a->head->next)
		return ;
	if (!stk_b || !stk_b->head || !stk_b->head->next)
		return ;
	ft_swap(stk_a);
	ft_swap(stk_b);
	ft_printf("ss\n");
}
