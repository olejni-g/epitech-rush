/*
** main.c for epic_editor in anywhere
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 00:41:46 2014 weisli_r
** Update       Sat May 10 13:19:53 2014 weisli_r
*/

#include <epic_editor.h>

void	print_help()
{
  my_puts("   2. Add a champion");
  my_puts("   3. Add a monster");
  my_puts("   4. Add a room");
}

int		create_header()
{
  int	fd;
  char	*s;

  while (42)
  {
	my_putstr("   Enter your header : ");
	s = my_getline(0);
	if (s[0] == '0')
	  exit(my_puts("   Goodbye !"));
	else if (s[0] == '1')
	  my_puts("   Syntax : GAMEFILE|BOSS_ROOM|SPAWN_ROOM");
	else
	  if ((fd = get_header(s)) != -1)
		return (fd);
  }
  return (0);
}

void	read_option(char *s, int fd)
{
  if (fd)
    {}
  if (s[0] == '0')
	exit(my_puts("   Goodbye !"));
  else if (s[0] == '1')
	print_help();
  else if (s[0] == '2')
	print_help();
  else if (s[0] == '3')
	print_help();
  else if (s[0] == '4')
	print_help();
}

int		main()
{
  int	fd;

  my_puts("-- Welcome to the epic js fantasy world editor");
  my_puts("-- \033[0;31m0 to quit, 1 to display the help\n\033[0;0m");
  fd = create_header();
  print_help();
  while (42)
  {
	my_putstr("\n   $ ");
	read_option(my_getline(0), fd);
  }
  return (0);
}
