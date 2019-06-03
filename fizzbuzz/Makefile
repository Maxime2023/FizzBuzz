##
## EPITECH PROJECT, 2018
## makekile
## File description:
## makefile printf
##

NAME	=	fizzbuzz

SRC	=	src/fizzbuzz.c		\
		src/modulo.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc 

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	clean fclean all
