##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## M
##

SRC 	=	fonct.c			\
		fonction.c		\
		las.c			\
		if.c			\
		my_hunter.c		\
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lc_graph_prog

clean:
	rm -f $(OBJ)
	find . -name "#*#" -delete -or -name "*~" -delete

fclean: clean
	rm -f $(NAME)
	find . -name "#*#" -delete -or -name "*~" -delete

re : fclean all
