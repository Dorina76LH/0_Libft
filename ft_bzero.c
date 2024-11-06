/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:05:06 by doberes           #+#    #+#             */
/*   Updated: 2024/11/06 22:11:30 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  bzero() function erases the data in the n bytes of the memory starting at
the location pointed to by s, by writing zeros (bytes containing '\0') to that
area.
If n is zero, bzero() does nothing.
gcc -Wall -Werror -Wextra ft_bzero.c ft_memset.c
*/
// #include <stdio.h>
// #include <string.h>
#include "libft.h"

// void	*ft_memset(void *b, int c, size_t n)
// {
// 	unsigned char	*ptr;
// 	unsigned char	value;
// 	size_t			i;

// 	i = 0;
// 	ptr = (unsigned char *)b;
// 	value = (unsigned char)c;
// 	while (i < n)
// 	{
// 		*ptr = value;
// 		ptr++;
// 		i++;
// 	}
// 	return (ptr);
// }

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	data[50] = "Talk to me softly. There is something in your eyes";
// 	int		i;
// 	int		n;

// 	printf("\nAvant memset\n");
// 	i = 0;
// 	n = 50;
// 	while (i < n)
// 	{
// 		printf("%c", data[i]);
// 		i++;
// 	}
// 	printf("\nApres memset\n");
// 	ft_memset(data, '0', n);
// 	i = 0;
// 	n = 50;
// 	while (i < n)
// 	{
// 		printf("%c", data[i]);
// 		i++;
// 	}
// 	return (0);
// }
