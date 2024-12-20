/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:26:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/13 13:32:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*sc;
	size_t				i;

	if (dest == 0 && src == 0)
		return (0);
	dt = (unsigned char *) dest;
	sc = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>

int main() {
	//char str[] = "123456";
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};

	// Move os 3 primeiros caracteres para frente em uma posição
	ft_memcpy(sResult + 1, sResult, 3);

	printf("Result: %s\n", sResult);  // Saída esperada: "aabdef"
	char str2[] = {67, 68, 67, 68, 69, 0, 45};

	// Move os 3 primeiros caracteres para frente em uma posição
	memmove(str2 + 1, str2, 3);

	printf("Expected: %s\n", str2);  // Saída esperada: "aabdef"
	return 0;
}
*/