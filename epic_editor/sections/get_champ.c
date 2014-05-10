/*
** get_champ.c for rush in /home/wilfried/rendu/rush/epitech-rush/epic_editor
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 11:52:34 2014 HENNUYER WILFRIED
** Last update Sat May 10 13:19:54 2014 HENNUYER WILFRIED
*/

#include <epic_editor.h>

int		check_len_line(char **line)
{
  int		i;

  i = 0;

  if (tab_len(line) != LEN_CHAMP)
    {
      my_puts(ERROR_CHAMP);
      return (-1);
    }
  while (line[i])
    {
      if (strlen(line[i]) > 255)
	{
	  my_puts("Too long Argument!");
	  return (-1);
	}
    }
  return (0);
}

int		write_champ(char **line, int fd)
{
  int		nb;

  nb = 1;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[0]);
  write(fd, &nb, sizeof(char));
  write(fd, line[0], nb);
  nb = 2;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[1]);
  write(fd, &nb, sizeof(char));
  write(fd, line[1], nb);
  nb = 3;
  write(fd, &nb, sizeof(char));
  nb = strlen(line[2]);
  write(fd, &nb, sizeof(char));
  write(fd, line[2], nb);
}

int		get_champ(char *str, int fd)
{
  char		**line;

  line = my_str_to_wordtab(str, "|");
  if (check_line(line) == -1)
    return (-1);
  write_champ(&champ, fd);
  return (0);
}
