/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:41:36 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/13 16:00:30 by pmoreira         ###   ########.fr       */
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
	int				id;
	size_t			moves;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	size_t	size;
}	t_stack;

void		ft_push_swap(t_stack *a, int*array);
int			*ft_valid(int ac, char const *av[]);
t_node		*ft_newnode(int value);
void		ft_add_front(t_stack *stack, t_node *new);
t_stack		*ft_init_stk(t_node *node);
t_stack		*ft_fill_stk(int *src, int size);

// CLEANERS

void		ft_clean_matrix(char **matrix);
void		ft_clean_stack(t_stack *stk);

// MOVES

void		swap(t_stack *stk, char target);
void		swap_ss(t_stack *stk_a, t_stack *stk_b);
void		push(t_stack *dst, t_stack *src, char target);
void		rot(t_stack *stk, int way, char target);
void		rot_r(t_stack *stk_a, t_stack *stk_b, int way);
void		rotate(t_stack *stk, int way);

// HELPERS

long		ft_atol(const char *nptr);
int			ft_verify(int *array, char *str);
void		ft_error(int *array);
void		ft_quick(int arr[], int bottom, int up);
void		ft_index(t_stack *a, int *src);



// TESTERS

void		push_test(t_stack *a, t_stack *b);
void		rotate_test(t_stack *stk);
void		sort_test(t_stack *a, t_stack *b);
void		index_test(t_stack *a, int *src);


// SORTING

void		sort(t_stack *a, t_stack *b);
void		sort_2(t_stack *s, char target);
void		sort_3(t_stack *s, char target);
void		sort_4(t_stack *a, t_stack *b);
void		sort_5(t_stack *a, t_stack *b);

// FINDERS

t_node		*is_min(t_stack *s);
int			ft_rot(t_stack *s, t_node *node);
int			r_rot(t_stack *s, t_node *node);

#endif