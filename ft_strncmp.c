/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:18:39 by doberes           #+#    #+#             */
/*   Updated: 2024/11/02 11:08:14 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strncmp() function compares the null-terminated strings s1 and s2.
The strncmp() function compares not more than n characters. Because strncmp()
is designed for comparing strings rather than binary data, characters that
appear after a ‘\0’ character are not compared.
RETURN VALUES
The strncmp() functions return an integer (>0, =0, <=), according as the string
s1 is greater than, equal to, or less than the string s2> The comparison is
done using unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char    *string1 = "the cake is a lie !\0I'm hidden lol\r\n";
//	char    *string2 = "there is no stars in the sky";
//	size_t 	size = strlen("the cake is a lie !\0I'm hidden lol\r\n");
//	int		resultat1 = strncmp(string1, string2, size);
//	int		resultat2 = ft_strncmp(string1, string2, size);
//
//	printf("String1 : %s\n", string1);
//	printf("string2 : %s\n", string2);
//	printf("Retour strncmp : %d\n", resultat1);
//	printf("Retour ft_strncmp : %d\n", resultat2);
//	return (0);
//}