/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:42:48 by doberes           #+#    #+#             */
/*   Updated: 2024/11/02 17:48:00 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. The pointer may subsequently be
used as an argument to the function free(3). If insufficient memory is
available, NULL is returned and errno is set to ENOMEM. The strndup() function 
copies at most n characters from the string s1 always NUL terminating the copied
string.
*/

# include <string.h>
#include "libft.a"

char *ft_strdup(const char *s1);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}