/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:41:36 by pmoreira          #+#    #+#             */
/*   Updated: 2025/02/03 11:38:41 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	int				id;
	int				moves;
	bool			rev;
	bool			best;
	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*target;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}	t_stack;

void		ft_push_swap(t_stack *a);
int			*ft_valid(int ac, char const *av[], int *size);
t_node		*ft_newnode(int value);
void		ft_add_front(t_stack *stack, t_node *new);
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

// HELPERS

long		ft_atol(const char *nptr);
int			ft_add(int *array, char *str);
void		ft_error(void);
int			is_sorted(t_stack *s);
void		ft_index(t_stack *s);

// TESTERS

void		sort_test(t_stack *a, t_stack *b);

// SORTING

void		sort(t_stack *a, t_stack *b);
void		sort_2(t_stack *s, char target);
void		sort_3(t_stack *s, char target);
void		sort_4(t_stack *a, t_stack *b);
void		sort_5(t_stack *a, t_stack *b);
void		big_sort(t_stack *a, t_stack *b);

// FINDERS

t_node		*is_min(t_stack *s);
t_node		*is_max(t_stack *s);
int			ft_rot(t_stack *s, t_node *node);
int			r_rot(t_stack *s, t_node *node);

// PROCESSORS

void		update_a(t_stack *a, t_stack *b);
void		move_a(t_stack *a, t_stack *b);
void		update_b(t_stack *a, t_stack *b);
void		move_b(t_stack *a, t_stack *b);
void		ft_cheap(t_stack *s);
t_node		*get_cheap(t_stack *s);
void		rot_both(t_stack *a, t_stack *b, t_node *node, int way);
void		set_head(t_stack *s, t_node *node, char target);

#endif