##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

SRC		=		lib/my/my_putchar.c \
				lib/my/my_putnbr.c \
				lib/my/my_putstr.c \
				lib/my/my_strlen.c \
				lib/my/hexa_convertor.c \
				lib/my/convertor_binaire.c \
				lib/my/convert_octal.c \
				lib/my/my_putnbr_long.c \
				lib/my/my_non_printable_str.c \
				lib/my/my_find.c \
				lib/my/hexa_convertor_up.c \
				lib/my/my_putnbr_long_unsigned.c \
				lib/my/cond1.c \
				lib/my/cond2.c \
				lib/my/cond3.c \
				lib/my/cond4.c \
				lib/my/my_abs.c \
				lib/my/my_printf.c \
				lib/my/my_putfloat.c \
				lib/my/my_revstr.c \
				lib/my/name.c \
				lib/my/set_param.c \
				lib/my/des.c \
				lib/my/structur.c \
				lib/my/animation.c

NAME	=		libmy.a

all:	$(NAME)

GRA = -lcsfml-graphics

SYS = -lcsfml-system

AUD = -lcsfml-audio

$(NAME):	lib/my/*.o
		gcc -c $(SRC)
		ar rc $(NAME) *.o
		gcc -o my_hunter my_hunter.c $(GRA) $(SYS) $(AUD) libmy.a

clean:
		rm *.o
		rm ./lib/my/*.o

fclean: clean
		rm -f $(NAME)
		rm my_hunter

re: 	fclean all

.PHONY: all clean fclean re
# gcc -o $(NAME) my_hunter.c -lcsfml-graphics -lcsfml-system libmy.a