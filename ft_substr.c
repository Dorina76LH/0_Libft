/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/06 16:25:17 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*s : source
start : index de depart pour l'extraction
len : taille a extraire
gcc -Wall -Werror -Wextra 
ft_substr.c ft_strlen.c ft_bzero.c ft_memset.c ft_calloc.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_total;
	size_t	i;
	char	*empty_str;
	char	*extract_str;

	if (s == NULL)
		return (NULL);
	if (start >= len || start < 0)
	{
		empty_str = (char *)ft_calloc(1, sizeof(char));
		return (empty_str);
	}
	len_total = 0;
	len_total = ft_strlen(s);
	if (start + len > len_total)
		len = len_total - start;
	extract_str = (char *)ft_calloc(len +1, sizeof(char));
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		extract_str[i] = s[start + i];
		i++;
	}
	extract_str[i] = '\0';
	return (extract_str);
}
/*
int	main(void)
{
	char  *texte = "Balnak ki a partra !";
	char  *resultat;
	
	printf("Texte : %s \n", texte);
	// Exemple 1 : Chaine entiere
	resultat = ft_substr(texte, 0, 20);
	printf("Extrait : %s\n", resultat);
	free (resultat);
	// Exemple 2 : Chaine valide
	resultat = ft_substr(texte, 7, 13);
	printf("Extrait : %s\n", resultat);
	free (resultat);
	// Exemple 3 : Debordement lomgueur
	resultat = ft_substr(texte, 7, 25);
	printf("Extrait : %s\n", resultat);
	free (resultat);
	// Start en dehors de len_total
	resultat = ft_substr(texte, 30, 13);
	printf("Extrait : %s\n", resultat);
	free (resultat);
	return (0);
}
*/
