/*
** get_header.c for rush in /home/wilfried/rendu/rush/epitech-rush/epic_editor
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 10:38:45 2014 HENNUYER WILFRIED
** Last update Sat May 10 13:19:49 2014 HENNUYER WILFRIED
*/

#include <epic_editor.h>

int		write_header_next(char **line, int fd)
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
  return (0);
}

int		write_header(char **line)
{
  int		fd;
  int		nb;

  if ((fd = open(line[0], O_RDWR | O_CREAT, 00644)) == 0)
    {
      my_puts("Fail open.");
      return (-1);
    }
  nb = MAGIC_NUMBER;
  write(fd, &nb, sizeof(char));
  nb = 13;
  write(fd, &nb, sizeof(char));
  write_header_next(line, fd);
  return (fd);
}

int		get_header(char *str)
{
  char		**line;

  line = my_str_to_wordtab(str, "|");
  if (tab_len(line) != 3)
    {
      my_puts(ERROR_HEADER);
      return (-1);
    }
  if (strlen(line[0]) > 255 || strlen(line[1]) > 255 || strlen(line[2]) > 255)
    {
      my_puts("Too long Argument!");
      return (-1);
    }
  return (write_header(line));
}
