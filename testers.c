/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:36:47 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/13 14:41:22 by pmoreira         ###   ########.fr       */
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
	push(b, a, 'b');
	ft_printf("size: %d\n",b->size);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("size: %d\n",a->size);
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push(b, a, 'b');
	ft_printf("size: %d\n",b->size);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("size: %d\n",a->size);
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push(a, b, 'a');
	ft_printf("size: %d\n",b->size);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("size: %d\n",a->size);
	ft_printf("head:%d\n", a->head->value);
	ft_printf("tail:%d\n", a->tail->value);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->value);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->value);
	push(b, a, 'b');
	ft_printf("size: %d\n",b->size);
	ft_printf("head:%d\n", b->head->value);
	ft_printf("tail:%d\n", b->tail->value);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->value);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->value);
	ft_printf("A-----\n");
	ft_printf("size: %d\n",a->size);
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
	sort_3(a, 'a');
	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->value);
}

void	sort_test(t_stack *a, t_stack *b)
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

void	index_test(t_stack *a, int *src)
{
	t_node *temp;

	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->id);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->id);
	ft_printf("----MOVES----\n");
	ft_index(a, src);
	temp = a->head;
	ft_printf("----STACK----\n");
	while (temp != a->tail)
	{
		ft_printf("%d\n", temp->id);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->id);
}
