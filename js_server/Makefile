##
## Makefile for rush in /home/brunau_b/rendu/epitech-rush/js_server
## 
## Made by Brunaud benoit
## Login   <brunau_b@epitech.net>
## 
## Started on  Sat May 10 14:43:05 2014 Brunaud benoit
## Last update Sat May 10 15:42:34 2014 Brunaud benoit
##

NAME	= js_server

RM	= rm -f

SRCS	= main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wextra -Wall -Werror -g -W
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I headers
CFLAGS	+= -I libmy

LDFLAGS	+= -L lib -l my

all: $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
