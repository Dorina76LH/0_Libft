/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/10/29 11:28:42 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The fonction uses the file descriptor to write a number in ASCII char
File descriptor :
- 0 : Stdin (by default : keyboard)
- 1 : Stdout (by default : command line)
- 2 : Stderr (by default the command line)
*/
// #include <unistd.h>
// #include <stdio.h>
#include "libft.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		write (fd, &s[i], 1);
// 		i++;
// 	}
// }

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

// int	main(void)
// {
// 	int	number;
// 	int	file_descriptor;

// 	file_descriptor = 1;
// 	number = -2147483648;
// 	ft_putnbr_fd(number, file_descriptor);
// 	write (file_descriptor, "\n", 1);
// 	number = -7000;
// 	ft_putnbr_fd(number, file_descriptor);
// 	write (file_descriptor, "\n", 1);
// 	number = 42;
// 	ft_putnbr_fd(number, file_descriptor);
// 	write (file_descriptor, "\n", 1);
// 	number = 2147483647;
// 	ft_putnbr_fd(number, file_descriptor);
// 	write (file_descriptor, "\n", 1);
// 	return (0);
// }
