/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/26 15:25:34 by pmoreira         ###   ########.fr       */
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
	return (0);
}
