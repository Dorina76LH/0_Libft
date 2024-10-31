/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/10/31 14:27:35 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Strlcat() function copies and concatenates strings. Strlcat() takes the full size
of the destination buffer and guarantee NUL-termination if there is room. Room
for the NUL should be included in dstsize. Strlcat() only operates on true 'C'
strings. This means for strlcat() both src and dst() must be NUL-terminated.
Strlcat() appends string src to the end of dst.
It will append at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the original dst string was
longer than dstsize (in practice this should not happen as it means that either
dstsize is incorrect or that dst is not a proper string).
If the src and dst strings overlap, the behavior is undefined.
Like snprintf(3), strlcat() functions returns the total length of the string.
For strlcat() that means the initial length of dst plus the length of src.
If the return value is >= dstsize, the output string has been truncated.
*/

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i_src;
	size_t	i_dst;

	if (src == NULL || dst == NULL)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_size == 0 || dst_size <= dst_len)
		return (dst_size + src_len);
	else
	{
		i_src = 0;
		i_dst = dst_len;
		while (src[i_src] != '\0' && i_dst < (dst_size - 1))
		{
			dst[i_dst] = src[i_src];
			i_dst++;
			i_src++;
		}
		dst[i_dst] = '\0';
	}
	return (src_len + dst_len);
}

// int	main(void)
// {
// 	char	src[] = " Tell me where did you sleep last night !";
// 	char	dest1[76] = "My girl, my girl don't lie to me !";
// 	char	dest2[76] = "My girl, my girl don't lie to me !";
// 	char	dest3[76] = "My girl, my girl don't lie to me !";
// 	char	dest4[76] = "My girl, my girl don't lie to me !";
// 	char	dest5[76] = "My girl, my girl don't lie to me !";
// 	char	dest6[76] = "My girl, my girl don't lie to me !";
// 	int		src_len;
// 	int		dest_len;

// 	src_len = ft_strlen(src);
// 	dest_len = ft_strlen(dest1);
// 	printf("\n Source : %s | Len : %d \n", src, src_len);
// 	printf("\n Destination : %s | Len : %d \n", dest1, dest_len);
// 	strlcat(dest1, src, 76);
// 	printf("\n Apres strlcat : %s | Len : %zu \n", dest1, ft_strlen(dest1));
// 	ft_strlcat(dest2, src, 76);
// 	printf("\n Apres ft_strlcat : %s | Len : %zu \n", dest2, ft_strlen(dest2));
// 	strlcat(dest3, src, 60);
// 	printf("\n Apres strlcat : %s | Len : %zu \n", dest3, ft_strlen(dest3));
// 	ft_strlcat(dest4, src, 60);
// 	printf("\n Apres ft_strlcat : %s | Len : %zu \n", dest4, ft_strlen(dest4));
// 	strlcat(dest5, src, 0);
// 	printf("\n Apres strlcat : %s | Len : %zu \n", dest5, ft_strlen(dest5));
// 	ft_strlcat(dest6, src, 0);
// 	printf("\n Apres ft_strlcat : %s | Len : %zu \n", dest6, ft_strlen(dest6));
// 	return (0);
// }
