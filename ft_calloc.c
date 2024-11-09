/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:05:37 by doberes           #+#    #+#             */
/*   Updated: 2024/11/09 16:03:11 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
gcc -Wall -Werror -Wextra ft_calloc.c ft_bzero.c
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	n = 10;
// 	size_t size = sizeof(int);
// 	int *array = (int *)ft_calloc(n, size);
// 	if (array == NULL)
// 	{
// 		printf("Échec de l'allocation mémoire.\n");
// 		return 1; // Sortir si allocation échoue
// 	}
// 	// Afficher les valeurs dans array avec une boucle while
// 	int i = 0;
// 	while (i < n) 
// 	{
// 		printf("%d ", array[i]); // Chaque élément doit être 0
// 		i++;
// 	}
// 	printf("\n");
// 	// Libérer la mémoire allouée
// 	free(array);
// 	return (0);
// }
