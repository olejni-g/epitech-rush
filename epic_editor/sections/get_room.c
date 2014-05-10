/*
** get_room.c for rush in /home/wilfried/rendu/rush/
**
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
**
** Started on  Sat May 10 15:29:12 2014 HENNUYER WILFRIED
** Last update Sat May 10 15:49:20 2014 HENNUYER WILFRIED
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <epic_editor.h>
#include <my.h>

int		check_len_room(char **line)
{
  int		i;

  i = 0;

  if (tab_len(line) != LEN_ROOM)
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

int		write_room(char **line, int fd)
{
  int		nb;

  nb = 1;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[0]);
  write(fd, &nb, sizeof(char));
  write(fd, line[0], nb);
  nb = 10;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[1]);
  write(fd, &nb, sizeof(char));
  write(fd, line[1], nb);
  nb = 11;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[2]);
  write(fd, &nb, sizeof(char));
  write(fd, line[2], nb);
  nb = 12;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[3]);
  write(fd, &nb, sizeof(char));
  write(fd, line[3], nb);
  return (0);
}

int		get_room(char *str, int fd)
{
  char		**line;

  line = my_str_to_wordtab(str, "|");
  if (check_len_room(line) == -1)
    return (-1);
  write_room(line, fd);
  return (0);
}
