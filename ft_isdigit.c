/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:05:06 by doberes           #+#    #+#             */
/*   Updated: 2024/11/06 22:06:55 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for a digit (0 through 9)
*/

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	test_chars [] = {'1', '3', '0', '$', '@', ' ', '*', '\t' };
// 	char	c;
// 	int		i;
// 	int		num_chars;

// 	num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
// 	// Test ft_isdigit
// 	i = 0;
// 	printf("\nTest ft_isdigit\n");
// 	while (i < num_chars)
// 	{
// 		c = test_chars[i];
// 		if (ft_isdigit(c) == 1)
// 			printf("The character '%c' is digit\n", c);
// 		else
// 			printf("The character '%c' is not digit\n", c);
// 		i++;
// 	}
// 	// Test isdigit
// 	printf("\nTest isdigit\n");
// 	i = 0;
// 	while (i < num_chars)
// 	{
// 		c = test_chars[i];
// 		if (isdigit(c) != 0)
// 		{
// 			printf("The character '%c' is digit\n", c);
// 			//printf("The value returned by isdigit : %d\n", isdigit(c));
// 		}
// 		else
// 		{	
// 			printf("The character '%c' is not digit\n", c);
// 			//printf("The value returned by isdigit : %d\n", isdigit(c));
// 		}
// 		i++;
// 	}
// 	return (0);
// }
