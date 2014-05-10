/*
** headers/epic_editor.h for headers
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 02:11:28 2014 weisli_r
** Update       Sat May 10 13:20:43 2014 weisli_r
*/

#define NRML "\033[0;0m"
#define YLLW "\033[0;33m"
#define RED  "\033[0;31m"
#define GREN "\033[0;32m"
#define BLUE "\033[0;36m"

#define MAGIC_NUMBER	"123"
#define ERROR_HEADER	"Learn to read idiot, your header is invalid"
#define ERROR_CHAMP		"Learn to read idiot, your champ is invalid"
#define LEN_CHAMP 8
#define LEN_MONSTER 7
#define LEN_ROOM 4

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libmy/my.h"

/*	get_header	*/

int	get_header(char *);

/*	get_champ	*/

int	get_champ(char *, int);
int	check_len_line(char **);
