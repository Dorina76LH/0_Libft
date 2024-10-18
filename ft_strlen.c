/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:56:30 by doberes           #+#    #+#             */
/*   Updated: 2024/10/18 15:58:17 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Calculates the length of the string pointed to by s,
excluding the terminating null byte ('\0')
*/
#include <stdio.h>
#include <ctype.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	return (0);
}