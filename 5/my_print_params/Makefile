##
## ETNA PROJECT, 23/10/2020 by meritt_j
## Makefile
## File description:
##      Get numbers in string
##

CC =	gcc

NAME =	my_print_params

SRC =	my_putchar.c		\
	my_putstr.c		\
	my_print_params.c	\
	main.c

OBJ =	$(SRC:%.c=%.o)

CFLAG =	-Wall -Wextra -Werror -std=c11

RM =	rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAG)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
