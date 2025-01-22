/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:36:47 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/22 14:46:58 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_test(t_stack *a, t_stack *b)
{
	t_node	*temp;

	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
	ft_printf("----MOVES----\n");
	sort(a, b);
	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
}
