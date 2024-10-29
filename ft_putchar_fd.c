/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/10/29 13:51:26 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The fonction uses the file descriptor to write a char
File descriptor
- 0 : stdin (default : keyboard)
- 1 : stdout (default : command line)
- 2 : stderr (default : command line)
*/

// #include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int		file_descriptor;
// 	char	character;

// 	file_descriptor = 1;
// 	character = 'Z';
// 	ft_putchar_fd(character, file_descriptor);
// 	return (0);
// }
