/*
** main.c for epic_editor in /home/closingin/documents/projects/epitech/rush_rpg/epic_editor
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

  my_puts("Welcome to the world editor");
  my_puts("Enter game file name :");
  s = my_getline(0);
  wordtab = my_str_to_wordtab(s, "|");
  while (wordtab[i])
  {
	printf("%s\n", wordtab[i]);
	i++;
  }
  return (0);
}
