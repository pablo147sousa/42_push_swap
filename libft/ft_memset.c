/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:08:08 by pmoreira          #+#    #+#             */
/*   Updated: 2024/12/23 12:51:05 by pmoreira         ###   ########.fr       */
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
