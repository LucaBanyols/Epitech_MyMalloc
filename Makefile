##
## EPITECH PROJECT, 2021
## my_malloc
## File description:
## Makefile
##

SRC	=	src/malloc.c		\
		src/calloc.c		\
		src/realloc.c		\
		src/reallocarray.c	\
		src/free.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS=	-I ./include -fPIC

NAME	=	./libmy_malloc.so

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -shared -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
