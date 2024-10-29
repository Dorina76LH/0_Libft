/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:16:59 by doberes           #+#    #+#             */
/*   Updated: 2024/10/29 15:49:48 by doberes          ###   ########.fr       */
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
# define LIBFT_H

# include <stdio.h> // printf
# include <stdlib.h> // atoi
# include <string.h> // strlen
# include <unistd.h> // write
# include <ctype.h> // sizeof

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
