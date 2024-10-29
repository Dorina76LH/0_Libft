#-----------------------------------
#          NAMES and PATHS          
#-----------------------------------

# Name of final binary (static library)
NAME = libft.a

# List of source files
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strlcpy.c

# List of object files (define the name of .o files from .c files)
OBJ = $(SRC:.c=.o)

#-----------------------------------
#              RULES
#-----------------------------------

## // COMPILING RULES

# Define compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Rule for all .c files necessary to build the final binary
all: $(NAME)

# To make $(NAME), create all .o files 
$(NAME) : $(OBJ)
	$(AR) -r $(NAME) $?

# Compile .o files
%.o: %.c 
	$(CC) -c $(CFLAGS) $?

## // CLEANING RULES

# Remove $(OBJ) => (.o) files
clean:
	rm -f $(OBJ)

# Remove $(NAME) => final binary
fclean: clean
	rm -f $(NAME)

# Remove all and compile : remove $(OBJ) and $(NAME) and compile all
re: fclean all

# Phony targets
.PHONY: all clean fclean re