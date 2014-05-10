/*
** headers/epic_editor.h for headers
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 02:11:28 2014 weisli_r
** Update       Sat May 10 02:17:44 2014 weisli_r
*/

#define NRML "\033[0;0m"
#define YLLW "\033[0;33m"
#define RED  "\033[0;31m"
#define GREN "\033[0;32m"
#define BLUE "\033[0;36m"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libmy/my.h"

typedef struct champ_s
{
  char		*name;
  char		*type;
  int		hp;
  int		spe;
  int		speed;
  int		dmg;
  char		*weapon;
  char		*armor;
}champ_t;

typedef struct monster_s
{
  char		*type;
  int		hp;
  int		spe;
  int		speed;
  int		dmg;
  char		*weapon;
  char		*armor;
}monster_t;

typedef struct room_s
{
  char		*name;
  char		*adv;
  char		*connect;
  char		*monsters;
}room_t;
