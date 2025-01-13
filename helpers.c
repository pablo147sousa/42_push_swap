/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:53:50 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/13 14:37:47 by pmoreira         ###   ########.fr       */
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

int	ft_verify(int *array, char *str)
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

void	ft_index(t_stack *a, int *src)
{
	t_node	*temp;
	int		i;
	int		j;

	temp = a->head;
	i = a->size;
	while (--i >= 0)
	{
		j = -1;
		while (src[++j])
		{
			if (temp->value == src[j])
				temp->id = j;
		}
		temp = temp->next;
	}
}
