/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:14:20 by doberes           #+#    #+#             */
/*   Updated: 2024/11/03 19:55:10 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memmove() function copies len bytes from string src to string dst. The two
strings may overlap; the copy is always done in a non-destructive manner.
The memmove() function returns the original value of dst.
*/

#include <string.h>
#include <stdio.h>
#include "libft.h"

//void	*ft_memcpy(void *dst, const void *src, size_t n)
//{
//	unsigned char		*destination;
//	const unsigned char	*source;
//	size_t				i;
//
//	if (n == 0 || (dst == NULL && src == NULL))
//		return (dst);
//	destination = (unsigned char *)dst;
//	source = (const unsigned char *)src;
//	i = 0;
//	while (i < n)
//	{
//		*destination = *source;
//		destination++;
//		source++;
//		i++;
//	}
//	return (dst);
//}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!destination || !source)
		return (NULL);
	if (destination > source)
	{
		i = len;
		while (i > 0)
		{
			i--;
			destination[i] = source[i];
		}
	}
	else
		ft_memcpy(destination, source, len);
	return (dst);
}

//int	main(void)
//{
//	char buffer[50] = "Nem vagyok en reszeg, csak hat igen igen kaba!";
//	char buffer2[50] = "Nem vagyok en reszeg, csak hat igen igen kaba!";
//
//	printf("Avant memmove                      : %s\n", buffer);
//
//	//Deplacement avec chevauchement
//	memmove(buffer + 7, buffer, 5);
//	printf("Apres memmove (chevauchement)      : %s\n", buffer);
//	ft_memmove(buffer2 + 7, buffer, 5);
//	printf("Apres ft_memmove (chevauchement)   : %s\n", buffer);
//
//	// Deplacement sans chevauchement
//	char src[] = "Test";
//	memmove(buffer, src, 4);
//	printf("Apres memmove (sans chevauchement) : %s\n", buffer);
//	ft_memmove(buffer2, src, 4);
//	printf("Apres ft_memmove (chevauchement)   : %s\n", buffer);
//
//	return (0);
//}