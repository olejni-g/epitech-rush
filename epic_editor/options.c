/*
** options.c for epic_editor in /home/closingin/documents/projects/
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 13:36:00 2014 weisli_r
** Update       Sat May 10 16:46:34 2014 weisli_r
*/

#include <stdlib.h>
#include <prototypes.h>
#include <my.h>

int		create_header()
{
  int	fd;
  char	*s;

  while (42)
  {
	my_putstr("   Enter your header : ");
	s = my_getline(0);
	if (my_strcmp(s, "0"))
	  exit(my_puts("   Goodbye !"));
	else if (my_strcmp(s, "1"))
	{
	  my_putstr("\n   ");
	  my_puts("Syntax            : GAMEFILE|BOSS_ROOM|SPAWN_ROOM");
	}
	else
	{
	  if ((fd = get_header(s)) != -1)
	  {
		my_puts("   Created the gamefile\n");
		return (fd);
	  }
	}
  }
  return (0);
}

int		create_champ(int fd)
{
  char	*s;

  while (42)
  {
	my_putstr("   Enter your settings : ");
	s = my_getline(0);
	if (my_strcmp(s, "0"))
	  exit(my_puts("   Goodbye !"));
	else if (my_strcmp(s, "1"))
	{
	  my_putstr("\n   ");
	  my_puts("Syntax              : NAME|TYPE|HP|SPE|SPEED|DEG|WEAPON|ARMOR");
	}
	else
	{
	  if (get_champ(s, fd) != -1)
	  {
		my_puts("   Champion added !\n");
		return (0);
	  }
	}
  }
  return (0);
}

int		create_monster(int fd)
{
  char	*s;

  while (42)
  {
	my_putstr("   Enter your settings : ");
	s = my_getline(0);
	if (my_strcmp(s, "0"))
	  exit(my_puts("   Goodbye !"));
	else if (my_strcmp(s, "1"))
	{
	  my_putstr("\n   ");
	  my_puts("Syntax              : TYPE|HP|SPE|SPEED|DEG|WEAPON|ARMOR");
	}
	else
	{
	  if (get_monster(s, fd) != -1)
	  {
		my_puts("   Monster added !\n");
		return (0);
	  }
	}
  }
  return (0);
}

int	create_room(int fd)
{
  char	*s;

  while (42)
  {
	my_putstr("   Enter your settings : ");
	s = my_getline(0);
	if (my_strcmp(s, "0"))
	  exit(my_puts("   Goodbye !"));
	else if (my_strcmp(s, "1"))
	{
	  my_putstr("\n   ");
	  my_puts("Syntax              : NAME|ADV|TAB->CONNECTION|TAB->MONSTER");
	}
	else
	{
	  if (get_room(s, fd) != -1)
	  {
		my_puts("   Room created!\n");
		return (0);
	  }
	}
  }
  return (0);
}
