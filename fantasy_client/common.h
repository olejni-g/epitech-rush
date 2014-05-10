/*
** common.h for js_fantasy in /home/olejni_g/rendu/epitech-rush/fantasy_client
** 
** Made by Olejniczak Geoffrey
** Login   <olejni_g@epitech.net>
** 
** Started on  Sat May 10 13:36:14 2014 Olejniczak Geoffrey
** Last update Sat May 10 15:23:20 2014 Olejniczak Geoffrey
*/

#ifndef	STRCT_H_
#define	STRCT_H_

typedef struct	s_creat
{
  char			*name;
  int			type;
  int			max_HP;
  int			HP;
  int			deg;
  int			max_mana;
  int			mana;
  int			speed;
  int			weapon;
  int			armor;
  int			potion;
  struct s_creat	*prev;
  struct s_creat	*next;
}			t_creat;

#endif	/* !STRCT_H_ */
