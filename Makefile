##
## Makefile for makefile in /home/roux_l/rendu/boggle
## 
## Made by Guillaume Roux
## Login	 <roux_l@epitech.net>
## 
## Started on	Tue May	17 18:19:09 2016 Guillaume Roux
## Last update	Tue May	17 18:19:09 2016 Guillaume Roux
##

NAME	= realboggle

SRC	= ./src/main.c \
	  ./src/my_puterr.c \
	  ./src/my_putstr.c \
	  ./src/get_next_line.c \
	  ./src/aff_tab.c \
	  ./src/free_tab.c \
	  ./src/my_strlen.c \
	  ./src/error.c \
	  ./src/fill_board.c \
	  ./src/gameplay.c \
	  ./src/my_strcmp.c \
	  ./src/win_check.c

OBJ	= $(SRC:.c=.o)

all:	  $(NAME)

$(NAME):  $(OBJ)
	  gcc -o $(NAME) $(OBJ)

clean:
	  rm -f $(OBJ)

fclean:	  clean
	  rm -f $(NAME)

re:	  fclean all

.PHONY:	  all clean fclean re
