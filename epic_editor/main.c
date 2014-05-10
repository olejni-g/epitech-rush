/*
** main.c for epic_editor in anywhere
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 00:41:46 2014 weisli_r
** Update       Sat May 10 11:23:38 2014 weisli_r
*/

#include <epic_editor.h>

int		main()
{
  int	fd;
  char	*s;

  my_puts("-- Welcome to the world editor --\n");
  my_puts("Waiting for game header");
  while ((s = my_getline(0)) && (fd = get_header(s)) == -1);
  while ((s = my_getline(0)))
  {
	if (s[0] == '4')
	{
	  exit(0);
	}
	my_putstr("$ ");

  }
  return (0);
}
