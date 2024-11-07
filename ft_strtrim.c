/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/07 14:26:04 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
gcc -Wall -Werror -Wextra ft_strtrim.c ft_strdup.c ft_strlen.c ft_strchr.c
ft_strrchr.c ft_substr.c ft_calloc.c
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set || s1[0] == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1 ;
	while (s1[start] && ft_strchr(set, (int)s1[start]))
		start++;
	while (end > start && ft_strrchr(set, (int)s1[end]))
		end--;
	if (end < start)
		return (ft_strdup(""));
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
