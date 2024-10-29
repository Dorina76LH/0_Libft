/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/10/29 13:51:26 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The fonction uses the file descriptor to write a string followed by a new line
File descriptor :
- 0 : stdin (by default : keyboard)
- 1 : stdout (by default : command line)
- 2 : stderr (bu default : command line)
*/

// #include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// int	main(void)
// {
// 	int		file_descriptor;
// 	char	*character;

// 	file_descriptor = 1;
// 	character = "My girl, my girl, don't lie to me !";
// 	ft_putendl_fd(character, file_descriptor);
// 	return (0);
// }
