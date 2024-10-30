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

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i_src;
	size_t	i_dst;

	// Verifier que src et dst ne sont pas NULL
	if (src == NULL || dst == NULL)
		return (0);
	// Obtenir la longueur de src et de dst
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	// Si dst_size est 0 ou si dst_size <= dst_len
	// Valeur retournee : 
	if (dst_size == 0 || dst_size <= dst_len)
		return (dst_size + src_len);
	else	
		{
			// Initialiser les index
			i_src = 0;
			i_dst = dst_len;
			// Copier src dans dst jusqu'a dest_size - 1 => rajouter '\0'
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

int	main(void)
{
	char	source[] = " Tell me where did you sleep last night !";
	char	destination1[76] = "My girl, my girl don't lie to me !";
	char	destination2[76] = "My girl, my girl don't lie to me !";
	char	destination3[76] = "My girl, my girl don't lie to me !";
	char	destination4[76] = "My girl, my girl don't lie to me !";
	char	destination5[76] = "My girl, my girl don't lie to me !";
	char	destination6[76] = "My girl, my girl don't lie to me !";
	int		source_len;
	int		destination_len;

	source_len = ft_strlen(source);
	destination_len = ft_strlen(destination1);
	printf("\n Source : %s | Len : %d \n", source, source_len);
	printf("\n Destination : %s | Len : %d \n", destination1, destination_len);
	strlcat(destination1, source, 76);
	printf("\n Apres strlcat : %s | Len : %zu \n", destination1, ft_strlen(destination1));
	ft_strlcat(destination2, source, 76);
	printf("\n Apres ft_strlcat : %s | Len : %zu \n", destination2, ft_strlen(destination2));
	strlcat(destination3, source, 60);
	printf("\n Apres strlcat : %s | Len : %zu \n", destination3, ft_strlen(destination3));
	ft_strlcat(destination4, source, 60);
	printf("\n Apres ft_strlcat : %s | Len : %zu \n", destination4, ft_strlen(destination4));
	strlcat(destination5, source, 0);
	printf("\n Apres strlcat : %s | Len : %zu \n", destination5, ft_strlen(destination5));
	ft_strlcat(destination6, source, 0);
	printf("\n Apres ft_strlcat : %s | Len : %zu \n", destination6, ft_strlen(destination6));
	return (0);
}