/*
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered to
be part of the string. If c is ‘\0’, the functions locate the terminating ‘\0’.
The strrchr() function is identical to strchr(), except it locates the last
occurrence of c. The functions strchr() and strrchr() return a pointer to the
located character, or NULL if the character does not appear in the string.
*/

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*string = "Balnak ki a partra !";
	char		c1 = 'a';
	char		c2 = 'k';
	char		c3 = 'z';
	
	char	*result1 = strchr(string, c1);
	if (result1 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c1, string, result1 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c1, string);
	
	char	*result2 = ft_strchr(string, c1);
	if (result2 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c1, string, result2 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c1, string);

	char	*result3 = strchr(string, c2);
	if (result3 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c2, string, result3 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c2, string);
	
	char 	*result4 = ft_strchr(string, c2);
	if (result4 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c2, string, result4 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c2, string);
	
	char 	*result5 = strchr(string, c3);
	if (result5 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c3, string, result5 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c3, string);
	
	char 	*result6 = ft_strchr(string, c3);
	if (result6 != NULL)
		printf("\nOccurence de '%c' dans la chaine : %s a la position %ld\n", c3, string, result6 - string);
	else
		printf("\n Le caractere '%c' n'a pas ete trouvee dans la chaine '%s'\n", c3, string);
	return (0);
}