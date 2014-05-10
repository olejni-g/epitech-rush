/*
** headers/prototypes.h for headers in /home/closingin/documents/rush_rpg
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Sat May 10 13:53:45 2014 weisli_r
** Update       Sat May 10 14:40:25 2014 weisli_r
*/

int	tab_len(char **);
int    	get_header(char *);
int    	get_champ(char *, int);
int	get_monster(char *, int);
int	get_room(char *, int);
int    	create_header();
void	create_champ(int);
void	create_monster(int);
void	create_room(int);
