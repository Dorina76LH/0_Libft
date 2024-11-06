/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:05:37 by doberes           #+#    #+#             */
/*   Updated: 2024/11/05 22:51:48 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The calloc() function contiguously allocates enough space for count objects
that are size bytes of memory each and returns a pointer to the allocated
memory. The allocated memory is filled with bytes of value zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
void	*ft_memset(void *b, int c, size_t n)
{
 	unsigned char	*ptr;
 	unsigned char	value;
 	size_t			i;

 	i = 0;
 	ptr = (unsigned char *)b;
 	value = (unsigned char)c;
 	while (i < n)
 	{
 		*ptr = value;
 		ptr++;
 		i++;
 	}
 	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

//int	main(void)
//{
//
//	return (0);
//}
