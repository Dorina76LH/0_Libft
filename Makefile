# Nom de la bibliotheque
NAME = libft.a

# Les fichiers sources
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \

# Les fichiers objets
OBJ = $(SRC: .c = .o)

# Compilateur et flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Regle proncipale pour compiler la bibliotheque
$(NAME) : $(OBJ)
ar rc $(NAME) $(OBJ) # Creation de la bibliotheque
ranlib $(NAME) # Indexation de la bibliotheque

# Regle pour complier les fichiers objets
%.o: %.c 
$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage des fichiers objets de la bibliotheque
fclean: clean
	rm -f $(NAME)

# Recompiler tout proprement
re: fclean $(NAME)