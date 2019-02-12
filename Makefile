##
## ETNA PROJECT, 11/12/2018 by flamen_m
## MAKEFILE
## File description:
##      [...]
##

NAME    = libmy_printf_`uname -m`-`uname -s`

SRC     =   \
           my_printf.c \
           my_putnbr.c \
           my_putstr.c \
           my_putnbr_base.c \
           my_putchar.c \
           my_strlen.c \

CC      = gcc

OBJ     = $(SRC:.c=.o)

CFLAGS  = -Wall -Werror -Wextra

all: my_printf_static my_printf_dynamic library

my_printf_static: $(OBJ)
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME).a $(OBJ)

my_printf_dynamic: $(OBJ)
	gcc $(CFLAGS) -fPIC -shared -o $(NAME).so $(SRC)

library:
	sudo cp $(NAME).so /usr/lib/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).a $(NAME).so

re: fclean all

.PHONY: all clean fclean re
