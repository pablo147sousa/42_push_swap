/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:36:22 by pmoreira          #+#    #+#             */
/*   Updated: 2025/01/06 11:15:37 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_input(const char *str)
{
	const char	*temp;

	temp = str;
	if (*str == '+' || *str == '-')
		temp++;
	while (*temp)
	{
		if (!ft_isdigit(*temp))
			return (0);
		temp++;
	}
	return (1);
}

static int	*ft_parse_str(char const *av[])
{
	char	**matrix;
	int		*array;
	int		i;

	i = 0;
	matrix = ft_split(av[1], 32);
	if (!matrix)
		return (0);
	while (matrix[i])
		i++;
	array = malloc((i + 1) * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (matrix[i])
	{
		if (!ft_input(matrix[i]) || !ft_verify(&array[i], matrix[i]))
		{
			ft_clean_matrix(matrix);
			return (free(array), NULL);
		}
		i++;
	}
	array[i] = 0;
	return (ft_clean_matrix(matrix), array);
}

static int	*ft_parse_args(int ac, char const *av[])
{
	int	*array;
	int	i;

	array = malloc(ac * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (*av)
	{
		if (!ft_input(*av) || !ft_verify(&array[i], (char *) *av))
			return (free(array), NULL);
		i++;
		av++;
	}
	array[i] = 0;
	return (array);
}

static int	ft_invalid(int *args)
{
	int	j;
	int	i;

	i = 0;
	if (!args)
		return (1);
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (args[i] == args[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_valid(int ac, char const *av[])
{
	int	*array;

	array = NULL;
	if (ac == 2)
		array = ft_parse_str(av);
	else
		array = ft_parse_args(ac, &av[1]);
	if (ft_invalid(array))
		return (ft_error(array), NULL);
	return (array);
}
