/*
*/

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	int 	fileDescriptor;
	char	*character;

	fileDescriptor = 1;
	character = "My girl, my girl, don't lie to me !";
	ft_putstr_fd(character, fileDescriptor);
	return (0);
}