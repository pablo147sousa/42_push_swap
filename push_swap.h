/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:41:36 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/27 11:07:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				content;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
}	t_stack;

int			*ft_valid(int ac, char const *av[]);
t_node		*ft_newnode(int content);
void		ft_add_front(t_stack *stack, t_node *new);
t_stack		*ft_init_stk(t_node *node);
t_stack		*ft_fill_stk(int *src);

// CLEANERS

void		ft_clean_matrix(char **matrix);

// MOVES

void		swap_a(t_stack *stk);
void		swap_b(t_stack *stk);

long		ft_atol(const char *nptr);
int			ft_verify(int *array, char *str);

#endif