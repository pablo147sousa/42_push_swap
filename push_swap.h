/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:41:36 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/30 13:52:57 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	size_t	size;
}	t_stack;

void		ft_push_swap(t_stack *a);
int			*ft_valid(int ac, char const *av[]);
t_node		*ft_newnode(int value);
void		ft_add_front(t_stack *stack, t_node *new);
t_stack		*ft_init_stk(t_node *node);
t_stack		*ft_fill_stk(int *src, int size);

// CLEANERS

void		ft_clean_matrix(char **matrix);
void		ft_clean_stack(t_stack *stk);

// MOVES

void		swap_a(t_stack *stk);
void		swap_b(t_stack *stk);
void		push_a(t_stack *dst, t_stack *src);
void		push_b(t_stack *dst, t_stack *src);
void		rot_a(t_stack *stk, int way);
void		rot_b(t_stack *stk, int way);
void		rot_r(t_stack *stk_a, t_stack *stk_b, int way);

// HELPERS

long		ft_atol(const char *nptr);
int			ft_verify(int *array, char *str);
void		ft_error(int *array);

// TESTERS

void		push_test(t_stack *a, t_stack *b);
void		rotate_test(t_stack *stk);

// SORTING

void		sort_3(t_stack *stk);

#endif