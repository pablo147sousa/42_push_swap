/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:36:22 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/26 14:01:02 by pmoreira         ###   ########.fr       */
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
	char **matrix;
	int *array;
	int i;

	i = 0;
	matrix = ft_split(av[1], 32);
	if (!matrix)
		return (0);
	while (matrix[i])
		i++;
	array = malloc(i * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (*matrix)
	{
		if (!ft_input(*matrix))
			return (0);
		array[i] = ft_atoi(*matrix);
		matrix++;
		i++;
	}
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

int	*ft_valid(int ac, char const *av[])
{
	if (ac == 2)
		return (ft_parse_str(av));
	else
		return (ft_parse_args(ac, &av[1]));
}
