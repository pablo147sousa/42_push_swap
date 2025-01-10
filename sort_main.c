/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:32:24 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/10 16:49:49 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}
