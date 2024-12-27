/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 15:44:45 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* void	ft_push_swap()
{
	
} */

int	main(int argc, char const *argv[])
{
	t_stack		*a;
	t_stack		*b;
	int			*out;

	if (argc <= 1)
		return (-1);
	a = NULL;
	b = malloc(sizeof(t_stack));
	b->head = NULL;
	b->tail = NULL;
	out = ft_valid(argc, argv);
	if (!out)
		return (-1);
	a = ft_fill_stk(out);
	if (!a)
		return (-1);
	// push_test(a, b);
	rotate_test(a);
	ft_clean_stack(a);
	ft_clean_stack(b);
	return (0);
}
