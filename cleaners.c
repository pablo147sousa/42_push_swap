/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:32 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 15:45:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clean_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	ft_clean_stack(t_stack *stk)
{
	t_node	*temp;

	if (!stk || !stk->head)
		return (free(stk));
	temp = stk->head;
	while(stk->head != stk->tail)
	{
		temp = stk->head->next;
		free(stk->head);
		stk->head = temp;
	}
	free(stk->head);
	free(stk);
}