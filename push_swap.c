/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:08:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/20 16:40:19 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <stdio.h>

void	ft_push_swap()
{
	
}

int	main(int argc, char const *argv[])
{
	int	*out;

	out = ft_valid(argc, argv);
	if (!out)
		return (-1);
	while (*out)
	{
		ft_printf("%d\n", *out);
		out++;
	}
	return (0);
}
