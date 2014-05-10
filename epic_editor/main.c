/*
** main.c for epic_editor in anywhere
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 00:41:46 2014 weisli_r
** Update       Sat May 10 02:18:35 2014 weisli_r
*/

#include <stdlib.h>

#include <my.h>
#include <epic_editor.h>

int		my_parse(char *s)
{
  my_printf("  %s\n", s);
  return (0);
}

int		main()
{
  char	*s;

  my_puts("Reading standard input");
  while ((s = my_getline(0)))
    {
      if (s[0] != '\n')
	{
	  my_parse(s);
	}
      free(s);
    }
  return (0);
}
