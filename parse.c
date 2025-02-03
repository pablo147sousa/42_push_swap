/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:36:22 by pmoreira          #+#    #+#             */
/*   Updated: 2025/02/03 11:39:14 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_input(const char *str)
{
	const char	*temp;

	temp = str;
	if (!*temp)
		return (0);
	if (*str == '+' || *str == '-')
		temp++;
	while (*temp)
	{
		if (!ft_isdigit(*temp))
			return (ft_error(), 0);
		temp++;
	}
	return (1);
}

static int	*ft_parse_str(char const *av[], int *size)
{
	char	**matrix;
	int		*array;
	int		i;

	matrix = ft_split(av[1], 32);
	if (!matrix || !*matrix)
		return (ft_clean_matrix(matrix), (int *)0);
	while (matrix[*size])
		*size += 1;
	array = malloc((*size) * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (matrix[i])
	{
		if (!ft_input(matrix[i]) || !ft_add(&array[i], matrix[i]))
		{
			ft_clean_matrix(matrix);
			return (free(array), NULL);
		}
		i++;
	}
	return (ft_clean_matrix(matrix), array);
}

static int	*ft_parse_args(int ac, char const *av[], int *size)
{
	int	*array;
	int	i;

	array = malloc((ac - 1) * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (*av)
	{
		if (!ft_input(*av) || !ft_add(&array[i], (char *) *av))
			return (free(array), NULL);
		i++;
		av++;
	}
	*size = ac - 1;
	return (array);
}

static int	ft_invalid(int *args, int size)
{
	int	j;
	int	i;

	i = 0;
	if (!args)
		return (1);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (args[i] == args[j])
				return (ft_error(), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_valid(int ac, char const *av[], int *size)
{
	int	*array;

	array = NULL;
	if (ac == 2)
		array = ft_parse_str(av, size);
	else
		array = ft_parse_args(ac, &av[1], size);
	if (ft_invalid(array, *size))
		return (NULL);
	return (array);
}
