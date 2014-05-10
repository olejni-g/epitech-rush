/*
** get_header.c for rush in /home/wilfried/rendu/rush/epitech-rush/epic_editor
** 
** Made by HENNUYER WILFRIED
** Login   <wilfried@epitech.net>
** 
** Started on  Sat May 10 10:38:45 2014 HENNUYER WILFRIED
** Last update Sat May 10 11:11:21 2014 HENNUYER WILFRIED
*/

#include <epic_editor.h>
#include <unistd.h>
int		write_header(t_header *header)
{
  int	fd;

  fd = open(header->name, O_RDWR | O_CREAT, 00644);
  write(fd, MAGIC_NUMBER, 3);
  write(fd, &(1), 8);
  write(fd, strlen(header->name), 8);
  write(fd, header->name, strlen(header->name));
  write(fd, 2, 8);
  write(fd, strlen(header->win), 8);
  write(fd, header->win, strlen(header->win));
  write(fd, 3, 8);
  write(fd, strlen(header->spawn), 8);
  write(fd, header->spawn, strlen(header->spawn));
  return (fd);
}

int		get_header(char *str)
{
  char		**line;
  t_header	header;

  line = my_str_to_wordtab(str, "|");
  if (tab_len(line) != 3)
    return (-1);
  header.name = line[1];
  header.win = line[2];
  header.spawn = line[3];
  return (write_header(&header));
}
