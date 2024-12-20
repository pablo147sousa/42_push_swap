/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:36:22 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/20 17:02:54 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_parse_str(char const *av[])
{
	char **matrix;
	int *array;
	int i;

	i = 0;
	matrix = ft_split(av[1], 32);
	if (!matrix)
		return (0);
	array = (int *)malloc((sizeof(matrix) / sizeof(char *)) * sizeof(int));
	if (!array)
		return (0);
	while (*matrix)
	{
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

	array = malloc((ac - 1) * sizeof(int));
	if(!array)
		return (0);
	i = 0;
	while (*av)
	{
		array[i] = ft_atoi(*av);
		i++;
		av++;
	}
	return (array);
}



int	*ft_valid(int ac, char const *av[])
{
	if (ac == 2)
		return (ft_parse_str(av));
	else
		return (ft_parse_args(ac, &av[1]));
}

