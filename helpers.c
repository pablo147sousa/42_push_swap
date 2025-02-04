/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:53:50 by pmoreira          #+#    #+#             */
/*   Updated: 2025/02/04 10:00:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long	result;
	long	i;
	long	sign;
	long	max;

	result = 0;
	i = 0;
	sign = 1;
	max = (long) INT_MAX + 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		if (result > max)
			break ;
		i++;
	}
	return (result * sign);
}

int	ft_add(int *array, char *str)
{
	long	nbr;

	nbr = ft_atol(str);
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (0);
	*array = (int) nbr;
	return (1);
}

void	ft_error(int *array)
{
	free(array);
	write(2, "Error\n", 7);
}

void	ft_index(t_stack *s)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = s->head;
	while (i < s->size)
	{
		temp->id = i;
		if (i > ((s->size) / 2))
			temp->rev = true;
		else
			temp->rev = false;
		temp = temp->next;
		i++;
	}
}

int	is_sorted(t_stack *s)
{
	t_node	*temp;

	temp = s->tail;
	if (s->head->value > s->head->next->value)
		return (0);
	while (temp != s->head)
	{
		if (temp->value < temp->prev->value)
			return (0);
		temp = temp->prev;
	}
	return (1);
}
