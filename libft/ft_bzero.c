/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:19:47 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/29 10:26:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
/*
#include <strings.h>

int main()
{
	char	src[10];
	char	src2[10];
	int		size;

	size = sizeof(src) / sizeof(char);
	ft_bzero(src, size);
	printf ("Result: %s\n", src);
	size = sizeof(src2) / sizeof(char);
	bzero(src2, size);
	printf ("Expected: %s\n", src2);
	return 0;
}
*/