/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:36:47 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 13:02:40 by pmoreira         ###   ########.fr       */
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
		ft_printf("%d\n", temp->content);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->content);
	ft_printf("----MOVES----\n");
	push_b(b, a);
	ft_printf("head:%d\n", b->head->content);
	ft_printf("tail:%d\n", b->tail->content);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->content);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->content);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->content);
	ft_printf("tail:%d\n", a->tail->content);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->content);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->content);
	push_b(b, a);
	ft_printf("head:%d\n", b->head->content);
	ft_printf("tail:%d\n", b->tail->content);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->content);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->content);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->content);
	ft_printf("tail:%d\n", a->tail->content);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->content);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->content);
	push_a(a, b);
	ft_printf("head:%d\n", b->head->content);
	ft_printf("tail:%d\n", b->tail->content);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->content);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->content);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->content);
	ft_printf("tail:%d\n", a->tail->content);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->content);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->content);
	push_b(b, a);
	ft_printf("head:%d\n", b->head->content);
	ft_printf("tail:%d\n", b->tail->content);
	if (b->head->prev)
		ft_printf("head prev:%d\n", b->head->prev->content);
	if (b->tail->next)
		ft_printf("tail next:%d\n", b->tail->next->content);
	ft_printf("A-----\n");
	ft_printf("head:%d\n", a->head->content);
	ft_printf("tail:%d\n", a->tail->content);
	if (a->head->prev)
		ft_printf("head prev:%d\n", a->head->prev->content);
	if (a->tail->next)
		ft_printf("tail next:%d\n", a->tail->next->content);
}
