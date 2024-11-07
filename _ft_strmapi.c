/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/11/07 17:23:33 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/
#include "libft.h"
#include <stddef.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    unsigned int    i;
    unsigned int    len;
    char            *result;
    // calculer la longueur de la chaine const
    len = ft_strlen(str);
    // allouer la memoire
    result = malloc(len + 1, sizeof(char));
    if (!result)
        return (NULL);
    while (str[i])
    {
        result[i] = f(i, str[i]);
        i++;
    }
    result[i] = '\0';
}

// int main(void)
// {
//     return (0);
// }