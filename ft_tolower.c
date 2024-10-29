/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:55 by doberes           #+#    #+#             */
/*   Updated: 2024/10/29 11:29:15 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The fonction converts uppercase letters to lowercase
ASCII uppercase A - Z : 65 - 90
ASCII lowercase a -z : 97 - 122
lowercase to uppercase = ASCII + 32 
*/
// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c +32;
	return (c);
}

// int	main(void)
// {
// 	// Declaring and set variables
// 	char	c_original;
// 	char	c_converted;
// 	char	test_chars[] = {'A', 'b', 'C', '1', '\t', '$', '*', ' ', '!'};
// 	int		i;
// 	int		num_chars;
// 	num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
// 	// Test ft_tolower
// 	printf("\nTest ft_tolower");
// 	i = 0;
// 	while (i < num_chars)
// 	{
// 		c_original = test_chars[i];
// 		c_converted = ft_tolower(c_original);
// 		printf("Original : '%c' | Converted : '%c'\n", c_original, c_converted);
// 		i++;
// 	}
// 	// Test toupper
// 	printf("\nTest toupper\n");
// 	i = 0;
// 	while (i < num_chars)
// 	{
// 		c_original = test_chars[i];
// 		c_converted = toupper(c_original);
// 		printf("Original : '%c' | Converted : '%c'\n", c_original, c_converted);
// 		i++;
// 	}
// 	return (0);
// }
