/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:56:30 by doberes           #+#    #+#             */
/*   Updated: 2024/10/22 16:43:45 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Calculates the length of the string pointed to by s,
excluding the terminating null byte ('\0')
*/
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*test;
// 	int		length;

// 	test = "Balnak ki a partra !";
// 	// Test ft_strlen
// 	length = ft_strlen(test);
// 	printf("\nTest ft_strlen\n");
// 	printf("Test : %s\n", test);
// 	printf("Length : %d\n", length);
// 	// Test ft_strlen
// 	length = strlen(test);
// 	printf("\nTest strlen\n");
// 	printf("Test : %s\n", test);
// 	printf("Length : %d\n\n", length);
// 	return (0);
// }
