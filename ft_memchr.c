/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:29:04 by doberes           #+#    #+#             */
/*   Updated: 2024/11/02 11:37:42 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s. The memchr() function returns a pointer to the byte
located, or NULL if no such byte exists within n bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		value;
	size_t				i;

	value = (unsigned char)c;
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == value)
			return ((void *)(str + i));
	}
	i++;
	return (NULL);
}
*/

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
	}
	i++;
	return (0);
}
