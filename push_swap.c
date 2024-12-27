/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 10:32:33 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* void	ft_push_swap()
{
	
} */

int	main(int argc, char const *argv[])
{
	t_stack		*stk;
	int			*out;
	t_node		*temp;

	if (argc <= 1)
		return (-1);
	stk = NULL;
	out = ft_valid(argc, argv);
	if (!out)
		return (-1);
	stk = ft_fill_stk(out);
	if (!stk)
		return (-1);
	temp = stk->head;
	while (temp != stk->tail)
	{
		ft_printf("%d\n", temp->content);
		temp = temp->next;
	}
	ft_printf("%d\n", temp->content);
	ft_printf("1-----\n");
	ft_printf("%d\n", stk->tail->next->content);
	ft_printf("2-----\n");
	ft_printf("%d\n", stk->head->prev->content);
}
