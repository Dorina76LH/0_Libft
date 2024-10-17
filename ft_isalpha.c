/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:52:27 by doberes           #+#    #+#             */
/*   Updated: 2024/10/17 15:34:17 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for an alphabetic character (equivalent to : isupper(c) || islower(c))
*/
//#include <stdio.h>
//#include <ctype.h>
//#include <libft.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	test_chars[] = {'a', 'A', '8', '&', '@', 'x', 'B', ' ', '\n', '*'};
// 	int		num_chars;
// 	int		i;
// 	char	c;

// 	num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
// 	// Test ft_isalpha
// 	printf("Test ft_isalpha\n");
// 	i = 0;
// 	while (i < num_chars)
// 	{
// 		c = test_chars [i];
// 		if (ft_isalpha(c) == 1)
// 			printf("The character '%c' is alpha\n", c);
// 		else
// 			printf("The character '%c' is not alpha\n", c);
// 		i++;
// 	}
// 	// Test isalpha
// 	printf("\nTest isalpha\n");
// 	i = 0;
// 	while (i < num_chars)
// 	{
// 		c = test_chars [i];
// 		if (isalpha(c) == 1)
// 			printf("The character '%c' is alpha\n", c);
// 		else
// 			printf("The character '%c' is not alpha\n", c);
// 		i++;
// 	}
// 	return (0);
// }
