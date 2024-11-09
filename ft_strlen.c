/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:56:30 by doberes           #+#    #+#             */
/*   Updated: 2024/11/09 13:25:48 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
gcc -Wall -Wextra -Werror ft_strlen.c
*/

#include "libft.h"

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
