/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:42:48 by doberes           #+#    #+#             */
/*   Updated: 2024/11/03 21:42:28 by doberes          ###   ########.fr       */
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

#include <string.h>
#include <stdio.h>
#include "libft.h"

//size_t	ft_strlen(const char *s)
//{
//	int	i;
//
//	i = 0;
//	while (s[i] != '\0')
//	{
//		i++;
//	}
//	return (i);
//}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(src);
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

//int	main(void)
//{
//	const char	*source = "Repulogepek oceanok a fuvek a fak a mezok a viragok";
//	char		*copy1 = strdup(source);
//	char		*copy2 = ft_strdup(source); 
//	
//	printf("Source : %s\n", source);
//	if (copy1 != NULL)
//	{
//		printf("Destination strdup    : %s\n", copy1);
//		free(copy1);
//	}
//	
//	if (copy2 != NULL)
//	{
//		printf("Destination ft_strdup : %s\n", copy2);
//		free(copy2);
//	}
//	else
//		printf("Erreur d'allocation de memoire.\n");
//	return (0);
//}