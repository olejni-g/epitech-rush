/*
** main.c for rush in /home/brunau_b/rendu/epitech-rush/js_server
** 
** Made by Brunaud benoit
** Login   <brunau_b@epitech.net>
** 
** Started on  Sat May 10 14:45:16 2014 Brunaud benoit
** Last update Sat May 10 16:58:10 2014 Brunaud benoit
*/

#include <stdio.h>
#include "js_server.h"

void	init_stuff(char *file)
{
  int	fd;

  fd = open(file, O_RDONLY);
  if (fd == -1)
    {
      printf("Game file wasn't found, asshat\n");
      exit(-1);
      }
  close(fd);
}

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      init_stuff(av[1]);
      /* do_magic stuff here */
    }
  else
    printf("Usage : ./js_server game_file\n");
  return (0);
}
