##
## ETNA PROJECT, 19/10/2020 by meritt_j
## Makefile
## File description:
##      Get numbers in string
##

CC =	gcc
NAME =	do-op
SRC =	do_op.c			\
	main.c			\
	my_getnbr.c		\
	my_putchar.c		\
	check_operator.c	\
	my_putnbr.c
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)
all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
