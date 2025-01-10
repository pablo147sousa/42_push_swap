/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:32 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/10 17:01:50 by pmoreira         ###   ########.fr       */
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
	while (stk->size != 0)
	{
		temp = stk->head->next;
		free(stk->head);
		stk->head = temp;
		stk->size -= 1;
	}
	free(stk);
}

// void	ft_clean_stack(t_stack **stk)
// {
// 	t_node	*temp;

// 	if (!stk || !*stk || !(*stk)->head)
// 	{
// 		free(*stk);
// 		*stk = NULL;
// 		return ;
// 	}
// 	while ((*stk)->size != 0)
// 	{
// 		temp = (*stk)->head->next;
// 		free((*stk)->head);
// 		(*stk)->head = temp;
// 		(*stk)->size -= 1;
// 	}
// 	free(*stk);
// 	*stk = NULL;
// }
