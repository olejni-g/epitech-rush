/*
** headers/epic_editor.h for headers
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 02:11:28 2014 weisli_r
** Update       Sat May 10 12:14:18 2014 weisli_r
*/

#define NRML "\033[0;0m"
#define YLLW "\033[0;33m"
#define RED  "\033[0;31m"
#define GREN "\033[0;32m"
#define BLUE "\033[0;36m"

#define MAGIC_NUMBER "123"

#define ERROR_HEADER "Learn to read idiot, your header is invalid\n"

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libmy/my.h"

typedef struct s_header
{
  char		*name;
  char		*win;
  char		*spawn;
}t_header;

typedef struct s_champ
{
  char		*name;
  char		*type;
  int		hp;
  int		spe;
  int		speed;
  int		dmg;
  char		*weapon;
  char		*armor;
}t_champ;

typedef struct s_monster
{
  char		*type;
  int		hp;
  int		spe;
  int		speed;
  int		dmg;
  char		*weapon;
  char		*armor;
}t_monster;

typedef struct s_room
{
  char		*name;
  char		*adv;
  char		*connect;
  char		*monsters;
}t_room;

int	get_header(char *);
