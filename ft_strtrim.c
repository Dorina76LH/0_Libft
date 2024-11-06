/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/06 22:50:40 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
gcc -Wall -Werror -Wextra ft_strtrim.c ft_strdup.c ft_strlen.c ft_strchr.c
ft_strrchr.c ft_substr.c ft_calloc.c
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    // Declaration des variables
	size_t	start;
	size_t	end;
	size_t	len;

	// Controle des parametres
	if ( !s1 || !set || s1[0] == '\0')
		return (ft_strdup(""));
	// Initialisation des variables
	start = 0;
	end = ft_strlen(s1) - 1 ; // se positionner avant le car fin de chaine
	// Chercher la position de depart => start
	while (s1[start] && ft_strchr(set, (int)s1[start])) // s1[i] = s1[i] != '\0'
		start++;
	//Chercher la position de fin
	while (end > start && ft_strrchr(set, (int)s1[end]))
		end--;
	// Controle position end et start apres trim
	if (end < start)
		return (ft_strdup(""));
	// Calcul longeur a copier
	len = end - start + 1; // rajouter un pour le car fin de chaine
	return (ft_substr(s1, start, len));
}
