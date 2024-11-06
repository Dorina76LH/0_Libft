/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/06 16:26:13 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fonction that takes an int nd converts it to a null-terminated string.
The function returns the result in a char array that must be allocated.
- Calculate the length of the number
Gestion '\0'
- 0 et int min => strdup rajoute le car fin de chaine
- pour les autres cèst fait par calloc au moment de l'allocation memoire
gcc -Wall -Werror -Wextra
ft_itoa.c ft_strlen.c ft_strdup.c ft_calloc.c ft_memset.c ft_bzero.c
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	num_length(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		if (num == -2147483648)
		{
			num = num / 10;
			count++;
		}
		num = num * -1;
	}
	while (num > 9)
	{
		num = num / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		position;
	char	*result;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr == 0)
		return (ft_strdup("0"));
	len = num_length(nbr);
	result = (char *)calloc((len + 1), sizeof(char));
	position = len - 1;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		result[position] = (nbr % 10) + '0';
		nbr = nbr / 10;
		position--;
	}
	return (result);
}

/*
int	main(void)
{
	int numbers[] = {-2147483648, -7000, 0, 42, 2147483647};
	int n = sizeof(numbers) / sizeof(numbers[0]);
	int i = 0;

	while (i < n)
	{
		char *str = ft_itoa(numbers[i]);
		if (str != NULL)
		{
			printf("Itoa (%d) = %s\n", numbers[i], str);
			free(str);
		}
		else
			printf("Erreur d'allocation de la memoire pour %d\n", numbers[i]);
		i++;
	}
	return (0);
}*/
