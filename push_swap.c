/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/30 10:25:05 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_push_swap(t_stack *a)
{
	t_stack	*b;

	b = malloc(sizeof(t_stack));
	b->head = NULL;
	b->tail = NULL;
	push_test(a, b);
	ft_clean_stack(b);
}

int	main(int argc, char const *argv[])
{
	t_stack		*a;
	int			*out;

	if (argc <= 1)
		return (0);
	// a = NULL;
	out = ft_valid(argc, argv);
	if (!out)
		return (-1);
	a = ft_fill_stk(out);
	if (!a)
		return (-1);
	// rotate_test(a);
	ft_push_swap(a);
	ft_clean_stack(a);
	return (0);
}
