/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:22:01 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/01 12:27:03 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb != 0 && (size > (size_t)(-1) / nmemb))
		return (0);
	array = (void *) malloc(nmemb * size);
	if (array == 0)
		return (0);
	ft_bzero (array, size * nmemb);
	return (array);
}
/*
int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Aloca memória para um array de 5 inteiros
    int *array = (int *)ft_calloc(num_elements, element_size);
    int *array2 = (int *)calloc(num_elements, element_size);

    // Verifica se a alocação foi bem-sucedida
    if (array == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Sai do programa com código de erro
    }

	if (array2 == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Sai do programa com código de erro
    }

    // Exibe os valores do array (todos devem ser 0)
    for (size_t i = 0; i < num_elements; i++) {
        printf("Result: array[%zu] = %d\n", i, array[i]);
        printf("Expected: array[%zu] = %d\n", i, array2[i]);
    }

    // Libera a memória alocada
    free(array);
    free(array2);

    return 0;
}
*/