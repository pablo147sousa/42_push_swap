/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:36:22 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/26 15:25:52 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_input(const char *str)
{
	const char	*temp;
	long		i;

	temp = str;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	i = ft_atoi(temp);
	if (i < INT_MIN || i > INT_MAX)
		return (0);
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
		if (!ft_input(matrix[i]))
			return (0);
		array[i] = ft_atoi(matrix[i]);
		i++;
	}
	array[i] = 0;
	ft_clean_matrix(matrix);
	return (array);
}

static int	*ft_parse_args(int ac, char const *av[])
{
	int	*array;
	int	i;

	array = malloc(ac * sizeof(int));
	if(!array)
		return (0);
	i = 0;
	while (*av)
	{
		if (!ft_input(*av))
			return (0);
		array[i] = ft_atoi(*av);
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
		return (free(array), NULL);
	return (array);
}
