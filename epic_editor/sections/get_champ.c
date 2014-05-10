/*
** get_champ.c for rush in /home/wilfried/rendu/rush/epitech-rush/epic_editor
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 11:52:34 2014 HENNUYER WILFRIED
** Last update Sat May 10 15:59:46 2014 HENNUYER WILFRIED
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <epic_editor.h>
#include <my.h>

int		check_len_champ(char **line)
{
  int		i;

  i = 0;

  if (tab_len(line) != LEN_CHAMP)
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

int		write_champ_next(char **line, int fd)
{
  int		nb;

  nb = 6;
  write(fd, &nb, sizeof(char));
  nb = atoi(line[6]);
  write(fd, &nb, sizeof(int));
  nb = 7;
  write(fd, &nb, sizeof(char));
  nb = atoi(line[7]);
  write(fd, &nb, sizeof(int));
  nb = 8;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[8]);
  write(fd, &nb, sizeof(char));
  write(fd, line[8], nb);
  nb = 9;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[9]);
  write(fd, &nb, sizeof(char));
  write(fd, line[9], nb);
  return (0);
}

int		write_champ(char **line, int fd)
{
  int		nb;

  nb = 0x0C;
  write(fd, &nb, sizeof(char));
  nb = 1;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[0]);
  write(fd, &nb, sizeof(char));
  write(fd, line[0], nb);
  nb = 4;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[1]);
  write(fd, &nb, sizeof(char));
  write(fd, line[1], nb);
  nb = 5;
  write(fd, &nb, sizeof(char));
  nb = atoi(line[2]);
  write(fd, &nb, sizeof(int));
  nb = 20;
  write(fd, &nb, sizeof(char));
  nb = atoi(line[3]);
  write(fd, &nb, sizeof(int));
  write_champ_next(line, fd);
  return (0);
}

int		get_champ(char *str, int fd)
{
  char		**line;

  line = my_str_to_wordtab(str, "|");
  if (check_len_champ(line) == -1)
    return (-1);
  write_champ(line, fd);
  return (0);
}
