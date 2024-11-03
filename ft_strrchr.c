/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/03 22:14:11 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered to
be part of the string. If c is ‘\0’, the functions locate the terminating ‘\0’.
The strrchr() function is identical to strchr(), except it locates the last
occurrence of c. The functions strchr() and strrchr() return a pointer to the
located character, or NULL if the character does not appear in the string.
unsigned char => table ASCII
ini = initial value of s*
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	unsig_char;
	const char		*last_occ = NULL;

	unsig_char = (unsigned char)(c & 0xFF);
	while (*s)
	{
		if (*s == unsig_char)
			last_occ = s;
		s++;
	}
	if (unsig_char == '\0')
		return ((char *)s);
	return ((char *)last_occ);
}
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

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	to_find;
	int				i;

	i = ft_strlen(s);
	to_find = (unsigned char)(c & 0xFF);
	while (i >= 0)
	{
		if ((unsigned char) s[i] == to_find)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

//int	main(void)
//{
//	const char	*string = "teste"; // Balnak ki a partra !
//	char		c1 = 'e';
//	char		c2 = 'y';
//	char		c3 = 'c';
//
//	char	*result1 = strrchr(string, c1);
//	if (result1 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c1, string, result1 - string);
//	else
//		printf("\n '%c' n'a pas ete trouvee dans la chaine '%s'\n", c1, string);
//	
//	char	*result2 = ft_strrchr(string, c1);
//	if (result2 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c1, string, result2 - string);
//	else
//		printf("\n '%c' n'a pas ete trouvee dans la chaine '%s'\n", c1, string);
//
//	char	*result3 = strrchr(string, c2);
//	if (result3 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c2, string, result3 - string);
//	else
//		printf("\n '%c' n'a pas ete trouvee dans la chaine '%s'\n", c2, string);
//
//	char 	*result4 = ft_strrchr(string, c2);
//	if (result4 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c2, string, result4 - string);
//	else
//
//	char 	*result5 = strrchr(string, c3);
//	if (result5 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c3, string, result5 - string);
//	else
//		printf("\n '%c' n'a pas ete trouvee dans la chaine '%s'\n", c3, string);
//
//	char 	*result6 = ft_strrchr(string, c3);
//	if (result6 != NULL)
//		printf("\n'%c' dans '%s' | pos : %ld\n", c3, string, result6 - string);
//	else
//		printf("\n '%c' n'a pas ete trouvee dans la chaine '%s'\n", c3, string);
//	return (0);
//}