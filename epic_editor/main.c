/*
** main.c for epic_editor in anywhere
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 00:41:46 2014 weisli_r
** Update       Sat May 10 10:35:52 2014 weisli_r
*/

#include <stdlib.h>
#include <epic_editor.h>

int		main()
{
  char	*s;
  char	**wordtab;

<<<<<<< HEAD
  my_puts("Welcome to the world editor");
  my_puts("Enter game file name :");
  s = my_getline(0);
  wordtab = my_str_to_wordtab(s, "|");
  while (wordtab[i])
  {
	printf("%s\n", wordtab[i]);
	i++;
  }
=======
  my_puts("Reading standard input");
  while ((s = my_getline(0)))
    {
      if (s[0] != '\n')
	{
	  my_parse(s);
	}
      free(s);
    }
>>>>>>> origin/master
  return (0);
}
