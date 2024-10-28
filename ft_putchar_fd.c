/*
The fonction uses the file descriptor to write a char
File descriptor
- 0 : stdin (default : keyboard)
- 1 : stdout (default : command line)
- 2 : stderr (default : command line)
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	int		fileDescriptor;
	char	character;
	fileDescriptor = 1;
	character = 'Z';
	ft_putchar_fd(character, fileDescriptor);
	return (0);
}