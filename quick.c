/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:26:23 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/10 16:10:57 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	ft_part(int arr[], int bottom, int up)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[up];
	i = bottom - 1;
	j = bottom;
	while (j < up)
	{
		if (arr[j] <= pivot)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[up]);
	return (i + 1);
}

void	ft_quick(int arr[], int bottom, int up)
{
	int	pivot;

	if (bottom < up)
	{
		pivot = ft_part(arr, bottom, up);
		ft_quick(arr, bottom, pivot - 1);
		ft_quick(arr, pivot + 1, up);
	}
}
