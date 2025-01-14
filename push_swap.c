/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/13 16:20:46 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_push_swap(t_stack *a, int *array)
{
	t_stack	*b;

	if (is_sorted(a))
		return ;
	b = malloc(sizeof(t_stack));
	b->head = NULL;
	b->tail = NULL;
	b->size = 0;
	ft_index(a, array);
	sort(a, b);
	ft_clean_stack(b);
}

int	main(int argc, char const *argv[])
{
	t_stack		*a;
	int			*out;
	int			i;

	if (argc <= 1)
		return (0);
	out = ft_valid(argc, argv);
	if (!out || !*out)
		return (free(out), -1);
	i = 0;
	while (out[i])
		i++;
	a = ft_fill_stk(out, i);
	if (!a)
		return (-1);
	ft_quick(out, 0, i - 1);
	ft_push_swap(a, out);
	free(out);
	ft_clean_stack(a);
	return (0);
}
