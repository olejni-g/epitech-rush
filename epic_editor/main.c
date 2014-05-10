/*
** main.c for epic_editor in anywhere
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 00:41:46 2014 weisli_r
** Update       Sat May 10 12:14:20 2014 weisli_r
*/

#include <epic_editor.h>

int		read_string()
{
  return (0);
}

void	read_option(char *s)
{
  static int	header = 0;

  while 
  if (!header && (s[0] == '0'))
  {
	my_puts("   Syntax : FILENAME|BOSS_ROOM|SPAWN_ROOM");
	my_putstr("   $ ");
	while ((s = my_getline(0)) && (fd = get_header(s)) == -1)
	{
	  my_putstr("   $ ");
	}
  }
  else if (s[0] == '1')
  {
  }
  else if (s[0] == '2')
  {
  }
  else if (s[0] == '3')
  {
  }
  else if (s[0] == '4')
  {
  }
  else if (s[0] == '5')
  {
	my_puts("   Quitting the editor, goodbye !");
	exit(0);
  }
}

int		main()
{
  int	fd;
  char	*s;

  my_puts("-- Welcome to the world editor\n");
  my_puts("\n   0. Create the header");
  my_puts("   1. Add a champion");
  my_puts("   2. Add a monster");
  my_puts("   3. Add a room");
  my_puts("   4. Display this menu");
  my_puts("   5. Quit the editor\n");
  while (42)
  {
	my_putstr("   $ ");
	read_option(my_getline(0));
  }
  return (0);
}
