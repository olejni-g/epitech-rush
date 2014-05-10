/*
** get_monster.c for rush in /home/wilfried/rendu/
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 15:23:33 2014 HENNUYER WILFRIED
** Last update Sat May 10 16:24:09 2014 HENNUYER WILFRIED
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <epic_editor.h>
#include <my.h>

int		check_len_monster(char **line)
{
  int		i;

  i = 0;

  if (tab_len(line) != LEN_MONSTER)
    {
      my_puts(ERR_TOOMANY);
      return (-1);
    }
  while (line[i])
    {
      if (strlen(line[i]) > 255)
	{
	  my_putstr(RED);
	  my_puts(ERR_LENGTH);
	  my_putstr(NRML);
	  return (-1);
	}
    }
  return (0);
}

int		write_monster_next(char **line, int fd)
{
  int		nb;

  nb = 6;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[3]);
  write(fd, &nb, sizeof(int));
  write(fd, line[3], nb);
  nb = 7;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[4]);
  write(fd, &nb, sizeof(int));
  write(fd, line[4], nb);
  nb = 8;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[5]);
  write(fd, &nb, sizeof(char));
  write(fd, line[5], nb);
  nb = 9;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[6]);
  write(fd, &nb, sizeof(char));
  write(fd, line[6], nb);
  return (0);
}

int		write_monster(char **line, int fd)
{
  int		nb;

  nb = 0x0E;
  write(fd, &nb, sizeof(char));
  nb = 4;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[0]);
  write(fd, &nb, sizeof(char));
  write(fd, line[0], nb);
  nb = 5;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[1]);
  write(fd, &nb, sizeof(char));
  write(fd, line[1], nb);
  nb = 20;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[2]);
  write(fd, &nb, sizeof(char));
  write(fd, line[2], nb);
  write_monster_next(line, fd);
  return (0);
}

int		get_monster(char *str, int fd)
{
  char		**line;

  line = my_str_to_wordtab(str, "|");
  if (check_len_monster(line) == -1)
    return (-1);
  write_monster(line, fd);
  return (0);
}
