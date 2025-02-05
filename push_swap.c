/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/02/05 16:18:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_push_swap(t_stack *a)
{
	t_stack	*b;

	if (is_sorted(a))
		return ;
	b = malloc(sizeof(t_stack));
	b->head = NULL;
	b->tail = NULL;
	b->size = 0;
	sort(a, b);
	ft_clean_stack(b);
}

int	main(int argc, char const *argv[])
{
	t_stack		*a;
	int			*out;
	int			size;

	if (argc <= 1)
		return (0);
	size = 0;
	out = ft_valid(argc, argv, &size);
	if (!out)
		return (free(out), -1);
	a = ft_fill_stk(out, size);
	if (!a)
		return (-1);
	ft_push_swap(a);
	free(out);
	ft_clean_stack(a);
	return (0);
}
