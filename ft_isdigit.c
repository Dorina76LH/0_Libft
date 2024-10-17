/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:05:06 by doberes           #+#    #+#             */
/*   Updated: 2024/10/17 10:58:54 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for a digit (0 through 9)
*/

//#include <libft.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
