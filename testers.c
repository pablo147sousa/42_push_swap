/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:36:47 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/30 12:16:24 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_test(t_stack *a, t_stack *b)
{
	t_node *temp;

	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
	ft_printf("----MOVES----\n");
	push_b(b, a);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push_b(b, a);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push_a(a, b);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push_b(b, a);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
}

void	rotate_test(t_stack *a)
{
	t_node *temp;

	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
	ft_printf("----MOVES----\n");
	sort_3(a);
	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
}