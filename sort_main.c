/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:32:24 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/17 17:01:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_a(t_stack *a, t_stack *b)
{
	ft_index(a);
	ft_index(b);
	set_a(a, b);
	cost_a(a, b);
}

void	big_sort(t_stack *a, t_stack *b)
{
	ft_printf("%d\n", a->head->value);
	ft_printf("%d\n", b->head->value);
	return ;
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
