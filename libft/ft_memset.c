/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:08:08 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/04 11:39:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	cbyte;
	unsigned char	*dest;
	size_t			i;

	cbyte = (unsigned char ) c;
	dest = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		dest[i] = cbyte;
		i++;
	}
	return (s);
}
/*
#include <string.h>

int main()
{
	char	src[10];
	char	src2[10];
	int		size;

	size = sizeof(src) / sizeof(char);
	printf ("Result: %s\n",(char *) ft_memset(src, 97, size));
	size = sizeof(src2) / sizeof(char);
	printf ("Expected: %s\n",(char *) memset(src2, 97, size));
	return 0;
}
*/