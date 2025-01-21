/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:55:26 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/21 17:20:21 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot_both(t_stack *a, t_stack *b, t_node *node, int way)
{
	while (a->head != node && b->head != node->target)
		rot_r(a, b, way);
	ft_index(a);
	ft_index(b);
}

void	set_head(t_stack *s, t_node *node, char target)
{
	while (s->head != node)
	{
		if (node->rev)
			rot(s, -1, target);
		else
			rot(s, 1, target);
	}
}
