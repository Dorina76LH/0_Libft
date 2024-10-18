/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:22:50 by doberes           #+#    #+#             */
/*   Updated: 2024/10/18 11:57:17 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
       
These  functions  check  whether c, which must have the value of an un‐
signed char or EOF, falls into a certain character class  according  to
the  specified  locale.   The functions without the "_l" suffix perform
the check based on the current locale.

isalpha()
    checks  for an alphabetic character; in the standard "C" locale,
    it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
    cales, there may be additional characters for which isalpha() is
    true—letters which are neither uppercase nor lowercase.

isdigit()
    checks for a digit (0 through 9).

isalnum()
    checks for an alphanumeric character; it is equivalent to (isal‐
    pha(c) || isdigit(c)).


isascii()
    checks whether c is a 7-bit unsigned char value that  fits  into
    the ASCII character set.

 isprint()
    checks for any printable character including space.
*/

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	char	*test;

	test = argv[1];
	if (argc != 2)
	{
		printf("Error : Enter only one character");
		return (0);
	}
	if (ft_isalpha(*test) == 1)
		printf("The character is alpha\n");
	else
		printf("The character is not alpha\n");
	if (ft_isdigit(*test) == 1)
		printf("The character is digit\n");
	else
		printf("The character is not digit\n");
	if (ft_isalnum(*test) == 1)
		printf("The character is alphanumeric\n");
	else
		printf("The character is not alphanumeric\n");
	return (0);
}
