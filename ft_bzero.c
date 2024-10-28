/*
The bzero() function writes n zeroed bytes to the string s.
If n is zero, bzero() does nothing.
*/
#include <stdio.h>
#include <string.h>

ft_bzero	(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (s == NULL || n ==0)
	return
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

int	main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	int i;
	int n;

	printf("Avant ft_bzero\n");
	n = 5;
	i = 0;
	while (i < n)
		{
		printf("%d", array[i]);
		i++;
		}
	return (0);
}
