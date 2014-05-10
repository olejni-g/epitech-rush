##
## Makefile for rush_rpg in /home/closingin/documents/projects/epitech/rush_rpg
##
## Made by      Rémi WEISLINGER
## Login        weisli_r
##
## Started on   Sat May 10 00:22:03 2014 weisli_r
## Update       Sat May 10 15:24:42 2014 weisli_r
##

NAME	= epic_editor

RM		= rm -f

SRCS	= main.c			\
	  options.c			\
	  sections/get_header.c		\
	  sections/get_champ.c		\
	  sections/get_monster.c	\
	  sections/get_room.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wextra -Wall -Werror -g
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I headers
CFLAGS	+= -I libmy

LDFLAGS	+= -L libmy -l my

all: $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
