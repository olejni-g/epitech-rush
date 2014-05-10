##
## Makefile for rush_rpg in /home/closingin/documents/projects/epitech/rush_rpg
##
## Made by      Rémi WEISLINGER
## Login        weisli_r
##
## Started on   Sat May 10 00:22:03 2014 weisli_r
## Update       Sat May 10 11:28:18 2014 weisli_r
##

NAME	= epic_editor

RM		= rm -f

SRCS	= main.c \
		get_header.c

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
