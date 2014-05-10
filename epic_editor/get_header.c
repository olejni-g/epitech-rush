/*
** get_header.c for rush in /home/wilfried/rendu/rush/epitech-rush/epic_editor
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 10:38:45 2014 HENNUYER WILFRIED
** Last update Sat May 10 11:46:16 2014 HENNUYER WILFRIED
*/

#include <epic_editor.h>

int		write_header(t_header *header)
{
  int		fd;
  int		nb;

  if ((fd = open(header->name, O_RDWR | O_CREAT, 00644)) == 0)
    {
      my_puts("Fail open, try again.\n");
      return (-1);
    }
  write(fd, MAGIC_NUMBER, 3);
  nb = 1;
  write(fd, &nb, sizeof(char));
  nb = strlen(header->name);
  write(fd, &nb, sizeof(char));
  write(fd, header->name, strlen(header->name));
  nb = 2;
  write(fd, &nb, sizeof(char));
  nb = strlen(header->win);
  write(fd, &nb, sizeof(char));
  write(fd, header->win, strlen(header->win));
  nb = 3;
  write(fd, &nb, sizeof(char));
  nb = strlen(header->spawn);
  write(fd, &nb, sizeof(char));
  write(fd, header->spawn, strlen(header->spawn));
  return (fd);
}

int		get_header(char *str)
{
  char		**line;
  t_header	header;

  line = my_str_to_wordtab(str, "|");
  if (tab_len(line) != 3)
    {
      my_puts(ERROR_HEADER);
      return (-1);
    }
  if (strlen(line[0]) > 255 || strlen(line[1]) > 255 || strlen(line[2]) > 255)
    {
      my_puts("Too long Argument!\n");
      return (-1);
    }
  header.name = line[0];
  header.win = line[1];
  header.spawn = line[2];
  return (write_header(&header));
}
