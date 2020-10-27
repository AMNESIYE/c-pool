##
## ETNA PROJECT, 19/10/2020 by meritt_j
## Makefile
## File description:
##      Get numbers in string
##

CC =	gcc

AR =	ar

NAME =	libmy.a

DIR =	./lib/my/

SRC =	$(DIR)my_getnbr.c	\
	$(DIR)my_isneg.c	\
	$(DIR)my_putchar.c	\
	$(DIR)my_putnbr.c	\
	$(DIR)my_putstr.c	\
	$(DIR)my_strcat.c	\
	$(DIR)my_strcmp.c	\
	$(DIR)my_strcpy.c	\
	$(DIR)my_strdup.c	\
	$(DIR)my_strlen.c	\
	$(DIR)my_strncat.c	\
	$(DIR)my_strncmp.c	\
	$(DIR)my_strncpy.c	\
	$(DIR)my_strstr.c	\
	$(DIR)my_swap.c

OBJ =	$(SRC:%.c=%.o)

CFLAG =	-Wall -Wextra -Werror -std=c11

RM =	rm -f

$(NAME):	$(OBJ)
		$(CC) -c $(CFLAG) $(SRC)
		$(AR) -r $(NAME) $(OBJ)
		rm ./*.o

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
