# Name of final binary (static library)
NAME = libft.a

# Source files
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c

# Build objects (compile .c files in $SRC and compile the into .o files)
OBJ = $(SRC:.c=.o)

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Regle principale pour compiler la bibliotheque
all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) -r $(NAME) $?

# Regle pour complier les fichiers objets
%.o: %.c 
	$(CC) -c $(CFLAGS) $?

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage des fichiers objets de la bibliotheque
fclean: clean
	rm -f $(NAME)

# Recompiler tout proprement
re: fclean all

.PONY: all clean fclean re