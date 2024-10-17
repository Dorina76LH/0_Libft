/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/10/17 15:43:35 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for an alphanumeric character.
It is equivalent to isalpha(c) || isdigit(c).
*/

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
//#include <libft.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	test_chars[] = {'a', 'A', '8', '&', '@', 'x', 'B', ' ', '\t', '*'};
	int		num_chars;
	int		i;
	char	c;

	num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
	// Test ft_isalnum
	printf("\nTest ft_isalnum\n");
	i = 0;
	while (i < num_chars)
	{
		c = test_chars [i];
		if (ft_isalnum(c) == 1)
			printf("The character '%c' is alphanumeric\n", c);
		else
			printf("The character '%c' is not alphanumeric\n", c);
		i++;
	}
	// Test isalnum
	printf("\nTest isalnum\n");
	i = 0;
	while (i < num_chars)
	{
		c = test_chars [i];
		if (isalnum(c) == 1)
			printf("The character '%c' is alphanumeric\n", c);
		else
			printf("The character '%c' is not alphanumeric\n", c);
		i++;
	}
	return (0);
}
