/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:16:59 by doberes           #+#    #+#             */
/*   Updated: 2024/10/17 10:53:26 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Protection contre les inclusions multiples
- #ifndef (si LIBFT_H pas defini)
- #define => #endif (fin de la protection)
Bibliotheques a inclure
Liste des prototypes de fonction a inclure dans la librarie
*/

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);



#endif
