/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/03 13:43:29 by pmoreira         ###   ########.fr       */
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
	b->size = 0;
	// push_test(a, b);
	// rotate_test(a);
	sort_3(a, 'a');
	ft_clean_stack(b);
}

int	main(int argc, char const *argv[])
{
	t_stack		*a;
	int			*out;
	int			i;

	if (argc <= 1)
		return (0);
	// a = NULL;
	out = ft_valid(argc, argv);
	if (!out)
		return (-1);
	i = 0;
	while (out[i])
		i++;
	a = ft_fill_stk(out, i);
	if (!a)
		return (-1);
	ft_printf("size: %d\n",a->size);
	ft_push_swap(a);
	ft_clean_stack(a);
	return (0);
}
