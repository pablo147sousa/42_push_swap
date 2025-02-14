/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:14:30 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/17 16:59:57 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stk, int way)
{
	if (way < 0)
	{
		stk->head = stk->tail;
		stk->tail = stk->tail->prev;
	}
	else
	{
		stk->head = stk->head->next;
		stk->tail = stk->tail->next;
	}
}

void	rot(t_stack *stk, int way, char target)
{
	if (!stk || !stk->head || !stk->head->next)
		return ;
	rotate(stk, way);
	if (way < 0)
		ft_printf("rr%c\n", target);
	else
		ft_printf("r%c\n", target);
}

void	rot_r(t_stack *stk_a, t_stack *stk_b, int way)
{
	if (!stk_a || !stk_a->head || !stk_a->head->next)
		return ;
	if (!stk_b || !stk_b->head || !stk_b->head->next)
		return ;
	rotate(stk_a, way);
	rotate(stk_b, way);
	if (way < 0)
		ft_printf("rrr\n");
	else
		ft_printf("rr\n");
}
